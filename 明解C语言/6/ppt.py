import requests
import urllib
import os
from bs4 import BeautifulSoup
from fake_useragent import UserAgent

def getPPT(url):
     f = requests.get(url,headers=headers)   #发送GET请求
     f.encoding = f.apparent_encoding    #设置编码方式
    soup1 = BeautifulSoup(f.text,'lxml')
    classHtml = soup1.find('div',class_="col_nav i_nav clearfix").select('a')    #在html中寻找类别
    for i in classHtml[:56]:
        classUrl = i['href'].split('/')[2] #将ppt模板类别关键词存到classUrl
        
        if not os.path.isdir(r'D:\PPT\\'+i['title']):   #判断有无此目录
            os.mkdir(r'D:\PPT\\'+i['title']) #若无，创建此目录。
        else:
            continue    #若有此目录，直接退出循环，就认为此类别已经下载完毕了
        
        n = 0
        for y in range(1,15):   #假设每个类别都有14页ppt（页数这一块找了很久，没找到全部获取的方法，只能采取此措施）
            pagesUrl = url+i['href']+'/ppt_'+classUrl+'_'+str(y)+'.html'
            a = requests.get(pagesUrl,headers=headers)
            
            if a.status_code != 404:    #排除状态码为404的网页
                soup2 = BeautifulSoup(a.text,'lxml')
                
                for downppt in soup2.find('ul',class_='tplist').select('li > a'):   #获取下载界面的URL
                    b = requests.get(url+downppt['href'],headers=headers)
                    b.encoding = b.apparent_encoding    #设置编码类型
                    soup3 = BeautifulSoup(b.text,'lxml')
                    downList = soup3.find('ul',class_='downurllist').select('a')    #获取下载PPT的URL
                    pptName = soup3.select('h1')   #ppt模板名称
                    print('Downloading......')
                    try:
                        urllib.request.urlretrieve(downList[0]['href'],r'D:\PPT\\'+i['title']+'/'+pptName[0].get_text()+'.rar')    #开始下载模板
                        print(i['title']+'type template download completed the '+str(n)+' few.'+pptName[0].get_text())
                        n += 1
                    except:
                        print(i['title']+'type download failed the '+str(n)+' few.')
                        n += 1

if __name__ == '__main__':
    headers = {'user-agent':UserAgent().random} #定义请求头
    getPPT('http://www.1ppt.com')
    
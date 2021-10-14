#include <stdio.h>
/*
为什么要按ctrl+z 才显示
*/

int main(void){
	int i,ch;
	int cnt[10] = {0};
	while(1){
		ch = getchar();
		if (ch==EOF) break;
		if (ch>='0'&&ch<='9')
			cnt[ch-'0']++;
	}
	puts("数字字符的出现次数");
	/*

	for (i=0;i<10;i++)
		printf("'%d':%d\n",i,cnt[i]);
	*/

	for (i=0;i<10;i++)
	{
		printf("'%d':",i);
		if (cnt[i] !=0){
		while (cnt[i]-->0)
			putchar('*');
		putchar('\n');}
		else putchar('\n');
		
		
	}



	return 0;}

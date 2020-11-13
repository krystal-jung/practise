//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>

void levorotation(char str[]){
	printf("请输入左旋的字符个数：");
	int k = 0;
	scanf("%d",&k);
	int len = strlen(str);
	for (; k < len;k++){
		int temp = str[0];
		for (int i = 0; i < len -1; i++){
			str[i] = str[i + 1];
		}
		str[len - 1] = temp;
	}
}

int main()
{
	char str[] = "ABCD";
	levorotation(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
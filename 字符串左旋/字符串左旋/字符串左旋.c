//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>

void levorotation(char str[]){
	printf("�������������ַ�������");
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
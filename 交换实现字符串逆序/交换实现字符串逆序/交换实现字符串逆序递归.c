#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

char * reverse_string(char *str) {

	if (strlen(str) < 2) {
		return str;
	}
	char ch = *str;
	int len = strlen(str) - 1;
	*str = *(str + len); //�����һ��λ�õ����ݸ�ֵ����ʼλ��
	*(str + len) = '\0'; //�ѵ�ǰ�����һ���ַ������滻Ϊ\0

	reverse_string(str + 1);
	*(str + len) = ch;
	return str;
}
int main()
{
	char tmp[] = "hello bit!";
	printf("%s\n", reverse_string(tmp));
	getchar();
	return 0;
}
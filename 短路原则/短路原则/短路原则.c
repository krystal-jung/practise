#include <windows.h>
#include<stdio.h>
int main()
{
	
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	//a++ ����ֵ�� 0, ���ն�·��ֵ�Ĺ���, ��ʱ, b, c, d �ı��ʽ����������ֵ��. 
	i = a++ && ++b && c++ && d++;
	//i = a++||++b||c++ || d++;
	Sleep(1000);
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	Sleep(1000);
	system("pasue");
	return 0;
}
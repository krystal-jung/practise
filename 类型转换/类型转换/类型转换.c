#include<stdio.h>
#include<windows.h>
int main()
{
	short a = 10;
	int b = 100000;
	a = b;
	printf("%d\n", a);
	Sleep(2000);
	system("pasue");
	return 0;
}
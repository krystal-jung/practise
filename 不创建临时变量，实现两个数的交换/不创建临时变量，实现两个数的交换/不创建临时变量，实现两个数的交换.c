#include <stdio.h>
#include <windows.h>
int main()
{
	int a = 15;
	int b = 25;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	Sleep(1000);
	system("pasue");
	return 0;
}
#include <stdio.h>
#include <windows.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	system("pasue");
	return 0;
}
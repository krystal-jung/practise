#include <windows.h>
#include<stdio.h>
int main()
{
	
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	//a++ 返回值是 0, 按照短路求值的规则, 此时, b, c, d 的表达式都不进行求值了. 
	i = a++ && ++b && c++ && d++;
	//i = a++||++b||c++ || d++;
	Sleep(1000);
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	Sleep(1000);
	system("pasue");
	return 0;
}
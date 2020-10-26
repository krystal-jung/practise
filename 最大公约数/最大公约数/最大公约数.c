#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a ;
	int b ;
	printf("请输入两个数字:");
	scanf("%d %d",&a,&b);
	int rem =0;
	while ((rem=a%b)!= 0){
		a = b;
		b = rem;
	}
	printf("最大公约数是%d\n",b);
	system("pause");
	return 0;
}
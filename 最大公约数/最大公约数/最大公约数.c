#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a ;
	int b ;
	printf("��������������:");
	scanf("%d %d",&a,&b);
	int rem =0;
	while ((rem=a%b)!= 0){
		a = b;
		b = rem;
	}
	printf("���Լ����%d\n",b);
	system("pause");
	return 0;
}
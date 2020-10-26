#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>

int mt(int n){
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int n = 0;
	printf("请输入乘法口诀表阶数：");
	scanf("%d", &n);
	printf("%d",mt(n));
	system("pause");
	return 0;
}

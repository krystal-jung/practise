#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ADD(int a, int b){
	return a + b;
}
int SUB(int a, int b){
	return a - b;
}
int MUL(int a, int b){
	return a * b;
}
int DIV(int a, int b){
	return a / b;
}
int main()
{
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf("%d %d",&a,&b);
	typedef int(*Func)(int, int);
	Func arr[] = { NULL, ADD, SUB, MUL, DIV };
	if (choice == 1){
		printf("%d",arr[1](a,b));
	}
	else if (choice == 2){
		printf("%d", arr[2](a, b));
	}
	else if (choice == 3){
		printf("%d", arr[3](a, b));
	}
	else if(choice==4) {
		printf("%d", arr[4](a, b));
	}
	else{
		printf("输入错误");
	}
	system("pause");
	return 0;
}
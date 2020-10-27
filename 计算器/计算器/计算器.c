#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable:4996)

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x * y;
}
int Div(int x, int y){
	return x / y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("please enter two data: \n");
	scanf("%d %d",&a,&b);
	printf("please enter op<+-*/ >: \n");
	char op = 'x';
	scanf(" %c",&op);
	if ('+' == op){
		printf("Add=%d\n", Add(a, b));
	}
	else if ('-' == op){
		printf("Sub=%d\n", Sub(a, b));
	}
	else if ('*' == op){
		printf("Mul=%d\n", Mul(a, b));
	}
	else if ('/' == op){
		if (b==0){
			printf("div zero£¡£¡£¡");
		}
		else{
			printf("Div=%d\n", Div(a, b));
		}
	}
	else{
		printf("enter error\n!!!!");

	}
	system("pause");
	return 0;
}



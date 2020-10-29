#include <stdio.h>
int fib(int n ){
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur = 0;
	for (int i = 3; i <= n; i++){
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main()
{
	int res = fib(10);
	printf("%d\n", res);
	system("pause");
	return 0;
}
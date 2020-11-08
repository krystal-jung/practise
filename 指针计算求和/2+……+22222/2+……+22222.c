//2+22+222+2222+22222

#include <stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	for (int i = 1; i <= 5; i++){
		a = a * 10 + 2;
		sum += a;
	}
	printf("%d", sum);
	system("pause");
	return 0;
	
}
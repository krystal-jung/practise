#include <stdio.h>
int main()
{
	int num = 10;
	int count = 0;
	while (num){
		if (num % 2 == 1){
			count++;
			
		}
		num = num / 2;
	}
	printf("%d",count);
	system("pause");
	return 0;
}
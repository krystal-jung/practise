#include <stdio.h>
int main()
{
	int count = 0;
	for (int i = 1; i < 101; i++){
		if (i % 10 == 9){
			count++;
		}
		if (i /10 == 9){
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
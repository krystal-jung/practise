#include <stdio.h>
int main()
{
	/*int num = 10;
	int count = 0;
	while (num){
		if (num % 2 == 1){
			count++;
			
		}
		num = num / 2;
	}
	printf("%d",count);*/
	/*int num = -1; 
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++){
		if (((num >> i) & 1) == 1){
			count++;
		}
	}
	printf("%d", count);*/
	/*int num = 15;
	int i = 0;
	int count = 0;
	while (num){

		count++;
		num = num&(num - 1);
	}
	printf("%d", count);*/
	int num = -1;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++){
	if ((1<<i)&num==1){
	count++;
	}
	}
	printf("%d", count);
	system("pause");
	return 0;
}
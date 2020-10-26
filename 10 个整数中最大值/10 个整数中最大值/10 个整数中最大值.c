#include <stdio.h>
int main()
{
	int arr[] = { 5,1200,15,16,10,99,76,44,15,85 };
	int max = arr[0];
	int i;
	for ( i = 1; i <= 9; i++){
		int temp;
		if (max < arr[i]){	
			max = arr[i];			
		}
	}
	if (max >= arr[i]){
		printf("%d\n", max);
	}
	system("pause");
	return 0;

}
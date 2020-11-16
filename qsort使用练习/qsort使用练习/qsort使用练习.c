#include <stdio.h>   
#include <stdlib.h>  
int cmp1(const void* a , const void* b){
	return (*(int*)a - *(int*)b);
}

int cmp2(const void* a, const void* b){
	return (*(char*)a - *(char*)b);
}
int cmp3(const void* a, const void* b){
	double ret = (*(double*)a - *(double*)b);
	if (ret < 0){
		return -1;
	}
	else if (ret == 0){
		return 0;
	}
		return 1;
}

int main()
{
	int arr[] = { 40, 10, 100, 90, 20, 25 };
	char arr2[10] = { 'i', 'g', 'c', 'e', 'd', 'f', 'b', 'h', 'a', 'j' };
	double arr3[5] = { 0.15, 0.46, 0.37, 0.08, 0.27};
	qsort(arr, 6, sizeof(int), cmp1);
	qsort(arr2, 10, sizeof(char), cmp2);
	qsort(arr3, 5, sizeof(double), cmp3);
	for (int i = 0; i < 6; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++){
		printf("%c ", arr2[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++){
		printf("%lf ", arr3[i]);
	}
	system("pause");
	return 0;
}
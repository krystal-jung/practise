#define _CRT_SECURE_NO_WARNINGS
#define NUMER 5
#include<stdio.h>
int main()
{
	int arr1[NUMER] = { 0 };
	int arr2[NUMER] = { 0 };
	printf("����������arr1��Ԫ�أ�NUMER����");
	for (int i = 0; i < 5; i++){
		scanf("%d",&arr1[i]);
	}
	printf("����������arr2��Ԫ�أ�NUMER����");
	for (int i = 0; i < 5; i++){
		scanf("%d",&arr2[i]);
	}
	for (int i = 0; i < 5; i++){
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("�������arr1��Ԫ�أ�NUMER����");
	for (int i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("�������arr1��Ԫ�أ�NUMER����");
	for (int  i = 0; i< 5; i++){
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
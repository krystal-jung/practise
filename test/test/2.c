#include <stdio.h>
#include <math.h>

//typedef int(*Cmp)(int a, int b);

//void bubbleSort(int arr[], int size, Cmp cmp){
//	for (int bound = 0; bound < size; bound++) {
//		for (int cur = size - 1; cur > bound; cur--) {
//			if (cmp(arr[cur - 1], arr[cur]) == 1) {
//				int tmp = arr[cur - 1];
//				arr[cur - 1] = arr[cur];
//				arr[cur] = tmp;
//			}
//		}
//	}
//}
//int less(int a, int b){
//	if (a == b){
//		return 0;
//	}
//	if (a < b) {
//		return -1;
//	}
//	return 1;
//}
int main()
{ /*
	int arr[] = { 9, 5, 2, 7 };
	bubbleSort(arr, 4, less);
	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}*/
 /*
	int num = 11;
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", ((num >> i) & 1));
	}
	for (int i = 31; i >= 0; i -= 2){
		printf("%d ", ((num >> i) & 1));
	}*/

	int num = 0;
	int count = 0;
	int tmp = num;
	int sum = 0;
	while (tmp){
		tmp = tmp / 10;
		count++;
	}
	tmp = num;
	while (tmp){
		sum = sum+ pow(tmp % 10, count);
		tmp = tmp / 10;
	}

	if (sum == num){
		printf("%d", num);
	}
	
	system("pause");
	return 0;
}
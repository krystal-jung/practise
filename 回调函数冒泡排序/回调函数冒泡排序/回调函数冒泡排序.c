#include <stdio.h>
typedef int(*Cmp)(int a, int b);
void bubbleSort(int arr[], int size, Cmp cmp){
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (cmp(arr[cur - 1], arr[cur]) == 1) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int less(int a, int b){
	if (a == b){
		return 0;
	}
	if (a < b) {
		return -1;
	}
	return 1;
}
int main()
{
	int arr[] = { 20,11,16,18};
	bubbleSort(arr, 4, less);
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
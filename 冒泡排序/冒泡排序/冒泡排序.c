#include <stdio.h>
void bubbleSort(int arr[]){
	int size = sizeof(arr) / sizeof(arr[0]);
	//[0,bound)已排序区间
	//[bound,size)未排序区间
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur>bound; cur--){
			if (arr[cur - 1] > arr[cur]){
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
int main()
{
	 int arr[] = { 9,1,3,5,7,2 };
	 bubbleSort(arr);
	 for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		 printf("%d ", arr[i]);
	 }
	 system("pause");
	 return 0;
}
#define NUMBER 5
#include <stdio.h>
void init(int arr[NUMBER]){
	for (int i = 0; i < NUMBER; i++){
		arr[i] = 0;
	}
}
void print(int arr[NUMBER]){
	for (int i = 0; i < NUMBER; i++){
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[NUMBER]){
	for (int i = NUMBER-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[NUMBER] = { 0 };
	init(arr);
	print(arr);
	reverse(arr);
	system("pause");
	return 0;
}
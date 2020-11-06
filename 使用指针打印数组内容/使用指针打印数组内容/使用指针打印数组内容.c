#include <stdio.h>
#define SIZE 5
void print(int arr[SIZE]){
	for (int i = 0; i < SIZE; i++){
		printf("%d ", *(arr+ i));
	}
}
int main()
{
	int arr[SIZE] = { 9,5,2,7,10 };
	print(&arr);
	system("pause");
	return 0;

}
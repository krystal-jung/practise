#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//48
	printf("%d\n", sizeof(arr[0]));//16
	printf("%d\n", sizeof(arr[0] + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", sizeof(arr[0][0]));
	printf("%d\n", sizeof(*arr[0]));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(*(arr + 1)));
	printf("%d\n", sizeof(*arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", sizeof(*(arr[0] + 1)));
	system("pause");
	return 0;
}

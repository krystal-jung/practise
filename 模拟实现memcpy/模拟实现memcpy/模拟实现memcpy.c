#include <stdio.h>
#include <assert.h>
void* myMemcpy(void* dest, const void* src, size_t num){
	assert(dest != NULL, src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (int i = 0; i < num; i++){
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}

int main()
{
	int arr[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 0 };
	myMemcpy(arr2, arr, sizeof(arr));
	for (int i = 0; i < 4; i++){
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
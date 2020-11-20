#include <stdio.h>
#include <assert.h>
void* myMemcpy(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (size_t i = 0; i < num; i++) {
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}

void* myMemmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	if (pSrc <= pDest && pDest <= pSrc + num) {
		for (size_t i = num - 1; i >= 0; i--) {
			*(pDest + i) = *(pSrc + i);
		}
		return dest;
	}
	else {
		return myMemcpy(dest, src, num);
	}
}

int main()
{
	int test[4] = {1,2,3,4};
	int test2[4] = { 0 };
	myMemmove(test2, test, sizeof(test));
	for (int i = 0; i < 4; i++){
		printf("%d ", test2[i]);
	}
	system("pause");
	return 0;
}
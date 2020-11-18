#include <stdio.h>
#include<assert.h>
#include <windows.h>
int myStrcmp(const char* str1, const char* str2){
	assert(str1 != NULL && str2 != NULL);
	while (*str1 != '\0'&&*str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){
			return 1;
		}
		else{
			str1++;
			str2++;
		}	
	}
	if (*str1 < *str2) {
		return -1;
	}
	else if (*str1 > *str2) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	char str1[] = "hehehe";
	char str2[] = "hehe";
	printf("%d", myStrcmp(str1, str2));
	system("pause");
	return 0;
}
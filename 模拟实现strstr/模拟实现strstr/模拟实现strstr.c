#include <stdio.h>
const char* myStrstr(const char* str1, const char* str2){
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}
	const char* black = str1;
	while (*black != '\0'){
	const char* red = black;
	const char* sub = str2;
		while (*black != '\0'&&*red != '\0'&&*red == *sub){
			red++;
			sub++;
		}
		if (*sub == '\0'){
			return black;
		}
		black++;
	}
	return NULL;
}
int main()
{
	char str1[] = "hello";
	char str2[] = "lo";
	printf("%s", myStrstr(str1, str2));
	system("pause");
	return 0;
}
#include <stdio.h>
char* myStrcpy(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	char* ret = dest;
	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	    char dest[] = "1234";
		char src[] = "abcd";
		printf("%s", myStrcpy(dest, src));
		system("pause");
		return 0;
}
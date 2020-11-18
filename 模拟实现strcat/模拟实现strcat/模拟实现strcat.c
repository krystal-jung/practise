#include <stdio.h>
char* myStrcat(char* dest, const char* src){
	if (dest == NULL&&src == NULL){
		return dest;
	}
	char* p = dest;
	while (*p != '\0'){
		p++;
	}
	while (*src != '\0'){
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}
int main()
{
	char dest[1024] = "hello,";
	char src[10] = "krystal";
	myStrcat(dest, src);
	printf("%s\n", dest);
	system("pause");
	return 0;
}
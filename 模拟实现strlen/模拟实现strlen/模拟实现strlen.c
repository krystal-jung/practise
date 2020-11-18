#include <stdio.h>
size_t myStrlen(const char * str){
	if (str == NULL){
		return 0;
	}
	size_t count = 0;
	while (*(str+count) != '\0'){
		count++;
	}
	return count;
}

int main()
{
	char str[] = "abcdef";
	printf("%d\n", myStrlen(str));
	system("pause");
	return 0;
}
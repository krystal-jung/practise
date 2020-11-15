#include <stdio.h>
void Reverse(char str[]){
	char *start = str;
	char *end = str + strlen(str) - 1;
	for (; start < end; start++, end--) {
		char tmp = *start;
		*start = *end;
		*end = tmp;
	}
	return;
}
int main()
{

	char buf[] = "nihao";
	printf("%s\n", buf);
	Reverse(buf);
	printf("%s\n", buf);
	system("pause");
	return 0;
}

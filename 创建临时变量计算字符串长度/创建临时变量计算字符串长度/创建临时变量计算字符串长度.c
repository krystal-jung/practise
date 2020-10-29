#include <stdio.h>
int strlen(char str[]){
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}


int main()
{
	char str[] = "12345";
	int res = strlen(str);
	printf("%d\n", res);
	system("pause");
	return 0;
}


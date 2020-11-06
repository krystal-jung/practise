#include <stdio.h>
#include<stdlib.h>
int reverse(char str[]){
	if (*str == '\0'){
		return 0;
	}
	reverse(str + 1);
	printf("%c", *str);

}
int main()
{
	char str[] = "123456";
	reverse(str);
	system("pasue");
	return 0;
}
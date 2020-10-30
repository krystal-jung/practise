#include <stdio.h>
#include <string.h>

//void reverse_string(char* str){
//	int len = 0;
//	for (len = strlen(str) - 1; len>=0; len--){
//		printf("%c", str[len]);
//	}
//}
int reverse_string(char* str){
	int len = strlen(str) - 1;
	if (len < 0){
		return -1;
	}
	printf("%c", str[len]);
	str[len] = '\0';
	reverse_string(str);

}
int main()
{
	char str[] = "12abc34";
	reverse_string(str);
	system("pause");
	return 0;
}
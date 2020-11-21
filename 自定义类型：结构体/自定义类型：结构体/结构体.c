#include <stdio.h>
#pragma pack(1)
struct s1 {
	char a;
	int b;
	char c;

};
#pragma pack()
struct s2 {
	char a;
	int b;
	char c;

};
int main()
{
	printf("%d\n", sizeof(struct s2));
	system("pause");
	return 0;
}

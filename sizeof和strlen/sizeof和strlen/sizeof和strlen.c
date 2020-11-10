#include<stdio.h>
int main()
{
	int a = 3;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));

	return 0;
}
#include<stdio.h>
int main()
{
	short s = 3;
	int a = 5;
	printf("%d\n", sizeof(s = a + 5));//2
	printf("%d\n", s);//3
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//}
//#include<stdio.h>
//#include<Windows.h>
//#pragma warining(disable:4996)
//	int main()
//	{
//		char arr1[] = { 'b', 'i', 't' };
//		char arr2[] = { "bit" };
//
//		printf("%d\n", sizeof(arr1));  //3
//		//printf("%d\n", strlen(arr1));//Ëæ»úÖµ
//
//		printf("%d\n", sizeof(arr2)); //4
//		printf("%d\n", strlen(arr2)); //3
//
//		system("pause");
//		return 0;
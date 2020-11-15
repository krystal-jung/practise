#include <stdio.h>
#include <string.h>
#include <Windows.h> //Sleep（）的头文件
int main()
{
	//int line = 6;
	//for (int n = 1; n <= line; n++){
	//	for (int i = 0; i < line - n;i++){
	//		printf(" ");
	//	}
	//	for (int i = 0; i < 2 * n - 1; i++){
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 1; i <= line; i++) {
	//	for (int j = 1; j <= i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 2 * (line - i) - 1; j > 0; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

		char arr1[] = "*************";
		char arr2[] = "      *      ";
		char arr3[] = "             ";
		printf("%s\n", arr2);
		int j = strlen(arr1) / 2; //strlen()字符串长度
		int left = j - 1;
		int right = j + 1;
		int i = 0;
		for (i = 0; i < j; i++)
		{
			Sleep(1000); //可省略，Sleep()睡眠函数，“S"需大写,()内为间隔显示时间，单位ms
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			left--;
			right++;
			printf("%s\n", arr2); //字符串形式打印
		}
		for (i = 0; i < j + 1; i++)
		{
			left++;
			right--;
			Sleep(1000); //同上
			arr2[left] = arr3[left];
			arr2[right] = arr3[right];
			printf("%s\n", arr2);
		}
	system("pause");
	return 0;
}
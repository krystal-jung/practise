#include <stdio.h>
#include <string.h>
#include <Windows.h> //Sleep������ͷ�ļ�
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
		int j = strlen(arr1) / 2; //strlen()�ַ�������
		int left = j - 1;
		int right = j + 1;
		int i = 0;
		for (i = 0; i < j; i++)
		{
			Sleep(1000); //��ʡ�ԣ�Sleep()˯�ߺ�������S"���д,()��Ϊ�����ʾʱ�䣬��λms
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			left--;
			right++;
			printf("%s\n", arr2); //�ַ�����ʽ��ӡ
		}
		for (i = 0; i < j + 1; i++)
		{
			left++;
			right--;
			Sleep(1000); //ͬ��
			arr2[left] = arr3[left];
			arr2[right] = arr3[right];
			printf("%s\n", arr2);
		}
	system("pause");
	return 0;
}
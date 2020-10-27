#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int IsLeap(int n){
	if (n % 100 == 0){
		if (n % 400 == 0){
			return 1;
		}
		return 0;
	}
	else{
		if (n % 4 == 0) {
			return 1;
		}
		return 0;
		}
	}


int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d",&year);
	if (IsLeap(year) == 1){
		printf("%d是闰年\n", year);
	}
	else{
		printf("%d是不闰年\n", year);
	}
	system("pause");
	return 0;
}

//使用逻辑运算符
//int main()
//{
//	for (int i = 1000; i <= 2000; i++){
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
//			printf("%d ",i);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
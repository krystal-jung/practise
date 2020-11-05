#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int countOneBit(int num) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (num & (1 << i)) {
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &n, &m);
	int num = n^m;
	int res=countOneBit(num);
	printf("二进制中不同位的个数是：%d\n", res);
	system("pause");
	return 0;
}
//输出所有的“水仙花数”，
//所谓的“水仙花数”是指一个三位数其各位数字的立方和等于该数本身，
//例如153是“水仙花数”，因为：153 = 1+125+27。
#include <stdio.h>
#include <math.h>
int narcissus(int num)
{
	int count = 0;
	int tmp = num;
	int sum = 0;
	while(tmp>0){
		count++;
		tmp = tmp / 10;
		
	}
	tmp = num;
	while (tmp>0){
		sum = sum + pow(tmp % 10, count);
			tmp = tmp / 10;
	}
	if (num == sum){
		return 1;
	}
	return 0;
}
int main()
{
	for (int i = 1; i < 100000; i++) {
		if (narcissus(i) == 1) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
#include <stdio.h>

int main()
{
	int money = 20;
	int price = 1;
	int count = 0;
	if (money > 2){
		count = money / price;
		int empty = count;
		while (empty > 1){
			count = count + empty / 2;
			empty = empty / 2 + empty % 2;
		}
	}
	else{
		count = money / price;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
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
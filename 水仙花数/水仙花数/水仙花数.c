//������еġ�ˮ�ɻ�������
//��ν�ġ�ˮ�ɻ�������ָһ����λ�����λ���ֵ������͵��ڸ�������
//����153�ǡ�ˮ�ɻ���������Ϊ��153 = 1+125+27��
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

#include <stdio.h>
//int main()
//{
//	int a = 50;
//	int b = 100;
//	int temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//

//void swap(int x, int y){
//	int temp = x;
//	x = y;
//	y = temp;
//	printf("x=%d y=%d\n", x, y);
//}
//
//int main()
//{
//	int a = 50; 
//	int b = 100;
//	swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//
void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 50;
	int b = 100;
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}


//�˴��� swap �����ȼ������´���
//���������, x ���� a �ĵ�ַ, ��� *x �͵ȼ��� a
// y ���� b �ĵ�ַ, ��� *y �ȼ��� b
//int* x = &a;
//int* y = &b;
//int x;
//int y;
//int temp = *x;
//*x = *y;
//*y = temp;
//
//int tmp = a;
//a = b;
//b = tmp;
//
//printf("a = %d, b = %d\n", a, b);
//

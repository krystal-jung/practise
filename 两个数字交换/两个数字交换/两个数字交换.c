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


//此处的 swap 函数等价于以下代码
//这个代码中, x 保存 a 的地址, 因此 *x 就等价于 a
// y 保存 b 的地址, 因此 *y 等价于 b
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

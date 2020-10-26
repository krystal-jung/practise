#include <stdio.h>
#include <math.h>
int main()
{
	double sum = 0;
	for (int i = 1; i <= 100; i++){
		sum = (1.0 / i) * (pow(-1, (i + 1))) + sum;
	}
	printf("%f\n", sum);
	system("pause");
	return 0;

}
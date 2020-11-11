//1
//1	1
//1	2	1
//1	3	3	1
//1	4	6	4	1
//1	5	10	10	5	1
//1	6	15	20	15	6	1
//1	7	21	35	35	21	7	1
//1	8	28	56	70	56	28	8	1
//1	9	36	84	126	126	84	36	9	1
#include <stdio.h>
# define MAX_ROW 10
# define MAX_COL 10
int main()
{
	int yanghui[MAX_ROW][MAX_COL] = {0};
	for (int row = 0; row < MAX_ROW; row++){
		yanghui[row][0] = yanghui[row][row] = 1;
	}
	for (int row = 2; row < MAX_ROW; row++){
		for (int col = 1; col < MAX_COL; col++){
			yanghui[row][col] = yanghui[row - 1][col - 1] + yanghui[row - 1][col];
		}
	}
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col <=row; col++){
			printf("%d ", yanghui[row][col]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
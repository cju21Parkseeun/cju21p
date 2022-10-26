#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define n 6 								// 매크로 상수 지정
#define m 4
#define rn 10

int main(void)
{
	srand(time(NULL));
	int a[n][m]{};
	int i, j;

	for (i = 0; i < n; i++)				// i가 증가하면서 n번 반복
	{
		for (j = 0; j < m; j++)				// j가 증가하면서 m번 반복
		{
			a[i][j] = (rand() % rn) + 1;     // 난수의 범위 0 ~ rn까지 한정
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int b[m][n];
	for (i = 0; i < m; i++)					// i가 증가하면서 m번 반복
	{
		for (j = 0; j < n; j++)			// j가 증가하면서 n번 반복
		{
			b[i][j] = (rand() % rn) + 1;		// 난수의 범위 0 ~ rn까지 한정
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	int c[n][n];
	for (i = 0; i < n; i++)				// i가 증가하면서 n번 반복
	{
		for (j = 0; j < n; j++)			// j가 증가하면서 n번 반복
		{
			c[i][j] = (a[i][0] * b[0][j] + a[i][1] * b[1][j]);
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define n 6 								// ��ũ�� ��� ����
#define m 4
#define rn 10

int main(void)
{
	srand(time(NULL));
	int a[n][m]{};
	int i, j;

	for (i = 0; i < n; i++)				// i�� �����ϸ鼭 n�� �ݺ�
	{
		for (j = 0; j < m; j++)				// j�� �����ϸ鼭 m�� �ݺ�
		{
			a[i][j] = (rand() % rn) + 1;     // ������ ���� 0 ~ rn���� ����
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int b[m][n];
	for (i = 0; i < m; i++)					// i�� �����ϸ鼭 m�� �ݺ�
	{
		for (j = 0; j < n; j++)			// j�� �����ϸ鼭 n�� �ݺ�
		{
			b[i][j] = (rand() % rn) + 1;		// ������ ���� 0 ~ rn���� ����
			printf("%5d", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	int c[n][n];
	for (i = 0; i < n; i++)				// i�� �����ϸ鼭 n�� �ݺ�
	{
		for (j = 0; j < n; j++)			// j�� �����ϸ鼭 n�� �ݺ�
		{
			c[i][j] = (a[i][0] * b[0][j] + a[i][1] * b[1][j]);
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
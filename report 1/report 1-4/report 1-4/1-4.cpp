#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define n 10								// �迭�� ��� ���� ���� 									
#define m 30								// ��� �ִ밪 ����
#define se 2								// �������� ���ǰ� ����

void choose(int* ran);

void choose(int* ran)
{
	int i;
	for (i = 0; i < n; i++)
	{
		ran[i] = (rand() % m) + 1;			// �����迭 �Է�
	}
}

int main(void)
{
	srand(time(NULL));
	int a[n];
	int i;
	int select = 0;

	choose(a);

	for (i = 0; i < n; i++)
	{
		printf("%3d ", a[i]);
	}

	printf("\n\nChoose between 1 to 2 \nascending = 1\ndescending = 2\nEnter: ");
	scanf_s("%d", &select);
	printf("\n");

	if (select == se)						// ��������, �������� ���� ����
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] > a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}
	else
	{
		int i, j, Num = 0;
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				if (a[i] < a[j])
				{
					Num = a[i];
					a[i] = a[j];
					a[j] = Num;
				}
			}
		}
	}

	for (i = 0; i < n; i++)
	{
				printf("%3d", a[i]);				// ���İ� �Է�
	}
	return 0;
}
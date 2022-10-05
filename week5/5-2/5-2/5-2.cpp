#include <stdio.h>

int main()

{
	int num;
	int prime;
	int i, j;
	int count = 0;
	printf("Enter an integer more than or equal to 2: ");
	scanf_s("%d", &num);
	for (i = 2; i <= num; i++)
	{
		prime = 1;
		for(j = 2; j < i; j++)
		{
			if((i%j) == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
		{
			printf("%5d", i);
			count++;
			if((count%5) == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;

}
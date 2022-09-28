#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0, res = 0;
	char op;

	printf("사직연산 입력(정수) ");
	scanf_s("%d%c%d", &num1, &op, 1, &num2);

	switch (op)
	{
		case'+':
		{
			res = num1 + num2;
			break;
		}

		case'-':
		{
			res = num1 - num2;
			break;
		}

		case'*':
		{
			res = num1 * num2;
			break;
		}

		case'/':
		{
			res = num1 / num2;
			break;
		}
	}

	printf("%d %c %d = %d\n", num1, op, num2, res);

	return 0;
}
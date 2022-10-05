#include <stdio.h>



int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int rem(int x, int y);


int main(void)

{
	int x = 0;
	int y = 0;
	int Addition;
	int Subtraction;
	int Multiplication;
	int Division;
	int Reminder;
	char chOper;

	scanf_s("%d %c %d", &x, &chOper, 1, &y);

	Addition = add(x, y);
	Subtraction = sub(x, y);
	Multiplication = mul(x, y);
	Division = div(x, y);
	Reminder = rem(x, y);

	switch (chOper)
	{
	case '+':
	{
		printf("%d %c %d = %d\n", x, chOper, y, Addition);
		break;
	}
	case '-':
	{
		printf("%d %c %d = %d\n", x, chOper, y, Subtraction);
		break;
	}
	case '*':
	{
		printf("%d %c %d = %d\n", x, chOper, y, Multiplication);
		break;
	}
	case '/':
	{
		printf("%d %c %d = %d\n", x, chOper, y, Division);
		break;
	}
	case '%':
	{
		printf("%d %c %d = %d\n", x, chOper, y, Reminder);
		break;
	}
	}



	return 0;

}

int add(int x, int y)
{
	int temp;

	temp = x + y;



	return temp;
}

int sub(int x, int y)
{
	int temp;

	temp = x - y;


	return temp;
}

int mul(int x, int y)
{
	int temp;

	temp = x * y;


	return temp;
}

int div(int x, int y)
{
	int temp;

	temp = x / y;


	return temp;
}
int rem(int x, int y)
{
	int temp;

	temp = x % y;

	return temp;
}
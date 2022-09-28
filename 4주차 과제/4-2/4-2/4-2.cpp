#include <stdio.h>

int main(void)
{
	int age = 0;
	int chest = 0;
	char size;

	printf("Input your age and chest size:\n");
	scanf_s("%d%hhd", &age, &size);

	int MinchestSize = 0;
	int MaxchestSize = 0;

	if (age > 20)
	{
		MinchestSize = 90;
		MaxchestSize = 100;
	}

	else
	{
		MinchestSize = 85;
		MaxchestSize = 95;
	}

	if (chest <= MinchestSize)
	{
		size = 'S';
	}
	else if ((chest > MinchestSize) && (chest <= MaxchestSize))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("Your age and chest size: %d, %c\n", age, size);

	return 0;
}
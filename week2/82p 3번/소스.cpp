#include <stdio.h>
int main(void)
{
	char ch;

	printf("text : ");
	scanf_s("%c", &ch);
	printf("%c ascii number : %d\n", ch, ch);
	return 0;
}
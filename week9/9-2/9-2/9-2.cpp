#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30] = {0}, str2[30] = { 0 }, str3[30] = { 0 };
	char change[20];

	printf("Enter the words: ");
	scanf("%s%s%s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)
	{
		strcpy(change, str1);
		strcpy(str1, str2);
		strcpy(str2, change);
	}

	if (strcmp(str1, str3) > 0)
	{
		strcpy(change, str1);
		strcpy(str1, str3);
		strcpy(str3, change);
	}

	if (strcmp(str2, str3) > 0)
	{
		strcpy(change, str2);
		strcpy(str2, str3);
		strcpy(str3, change);
	}
	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
}
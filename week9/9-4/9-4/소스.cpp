#include<stdio.h>
#pragma warning(disable: 6031)

void input(int *ftp, int *sdp);
void swap();
void output(int ft, int sd);

int ft, sd;

void input(int* ftp, int* sdp)
{
	printf("Enter numbers: ");
	scanf("%d%d", ftp, sdp);
}

void swap()
{
	int temp;

	temp = ft;
	ft = sd;
	sd = temp;
}

void output(int ft, int sd)
{
	printf("print numbers: %d, %d\n", ft, sd);
}

int main()
{
	input(&ft, &sd);
	swap();
	output(ft, sd);

	return 0;
}
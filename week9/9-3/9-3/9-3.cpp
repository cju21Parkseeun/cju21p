#include<stdio.h>

void add(int* pa, int* pb, int* pr)
{
	*pr = *pa + *pb;
}

int main()
{
	int a = 10, b = 20, res = 0;
	add(&a, &b, &res);
	printf("%d", res);
	return 0;
}
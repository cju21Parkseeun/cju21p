#include <stdio.h>

int main(void)
{
	double weight, height, bmi;

	printf("weight(kg) and height(cm) : ");
	scanf_s("%lf%lf", &weight, &height);
	height = height / 100.0;
	bmi = weight / (height * height);

	((bmi >= 20.0) && (bmi < 25.0))
		? printf("standard.\n")
		: printf("need to take care of your weight.\n");

	return 0;

}
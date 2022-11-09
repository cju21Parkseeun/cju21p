#include <stdio.h>

double Det(double a[3][3])
{
	// ��� ����
	return (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) - (a[0][2] * a[1][1] * a[2][0]) - (a[0][0] * a[1][2] * a[2][1]) - (a[0][1] * a[1][0] * a[2][2]);
}


int main(void)
{

	double Left[3][3] = {};																		//���������� ����
	double Right[3] = {};																		//���������� ����
	char input = 'n';

	printf("Enter the equation you want to calculate.\n");
	printf("For example, - 2y + 3z = 6 should be entered as 0 -2 3 6\n");

		printf("Enter equation 1: ");
		scanf_s("%lf %lf %lf %lf", &Left[0][0], &Left[0][1], &Left[0][2], &Right[0]);
	
		printf("Enter equation 2: ");
		scanf_s("%lf %lf %lf %lf", &Left[1][0], &Left[1][1], &Left[1][2], &Right[1]);
	
		printf("Enter equation 3: ");
		scanf_s("%lf %lf %lf %lf", &Left[2][0], &Left[2][1], &Left[2][2], &Right[2]);


	double detx[3][3]																		//������������ ����� ������ x�� ����
	{
		{Right[0], Left[0][1], Left[0][2]},
		{Right[1], Left[1][1], Left[1][2]},
		{Right[2], Left[2][1], Left[2][2]}
	};

	double dety[3][3]																		//������������ ����� ������ y�� ����
	{
		{Left[0][0], Right[0], Left[0][2]},
		{Left[1][0], Right[1], Left[1][2]},
		{Left[2][0], Right[2], Left[2][2]}
	};

	double detz[3][3]																		//������������ ����� ������ z�� ����
	{
		{Left[0][0], Left[0][1], Right[0]},
		{Left[1][0], Left[1][1], Right[1]},
		{Left[2][0], Left[2][1], Right[2]}
	};

	if (Det(Left) != 0)																		
		//��� ��� ������ �ظ� ���� ��� X = Dx/D, Y = Dy/D, Z = Dz/D ���
		printf("The calculation result is... ( %.02lf, %.02lf, %.02lf)", Det(detx) / Det(Left), Det(dety) / Det(Left), Det(detz) / Det(Left));
	else
		printf("\nNo answer found. Please re-enter the equation.");

	return 0;
}
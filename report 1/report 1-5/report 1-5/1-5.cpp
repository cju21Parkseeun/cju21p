#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void GenRandSeed()                                                  // 정수 생성 코드
{
	srand((unsigned int)(time(NULL)));
	return;
}

int main()
{
	GenRandSeed();

	int i = 0, count = 0;
	double r1, r2, x1[100], x2[100], v, k, z;					// x1, x2 정규분포 변수 지정
	printf("Accuracy rate calculation results: \n");

	//x1 변수 생성
	do {
		r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;							// 0 ~ 1 사이의 난수 발생

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x1[i] = z;
			i++;
		}

	}while (i < 100);
	i = 0;

	//x2 변수 생성
	do {
		r1 = (double)rand() / 32767;
		r2 = (double)rand() / 32767;

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x2[i] = z;
			i++;
		}
		
	}while (i < 100);

	for (i = 0; i < 100; i++)
	{
		// 명중했는지 판단
		if ((0.8 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
		count++;
	}

	printf("Success: %d/100 -> Probability of success: %.3lf == %.0f%%\n", count, ((double)count/100), ((double)count / 100) * 100);
	return 0;

}

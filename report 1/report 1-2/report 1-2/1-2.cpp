#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COUNT 20                                                    // 배열 크기 지정

void GenRandSeed()                                                  // 정수 생성 코드
{
    srand((unsigned int)(time(NULL)));
    return;
}

int main(void)
{
    GenRandSeed();

    int data[COUNT];
    int sum = 0;
    double average, std_deviation, variance = 0;                    // 평균, 분산, 표준편차를 위한 변수

    for (int i = 0; i < COUNT; i++)                                 // i가 증가하면서 COUNT번 반복
    {
        data[i] = rand();
        sum = sum + data[i];
    }
    average = (double)sum / COUNT;

    for (int i = 0; i < COUNT; i++)
    {
        variance = variance + (data[i] - average) * (data[i] - average);
    }
    variance = variance / COUNT;
    std_deviation = sqrt(variance);

    printf("Average: % .3lf\nVariance: % .3lf\nStd_deviation: % .3lf\n", average, variance, std_deviation);
}
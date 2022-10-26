#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COUNT 20                                                    // �迭 ũ�� ����

void GenRandSeed()                                                  // ���� ���� �ڵ�
{
    srand((unsigned int)(time(NULL)));
    return;
}

int main(void)
{
    GenRandSeed();

    int data[COUNT];
    int sum = 0;
    double average, std_deviation, variance = 0;                    // ���, �л�, ǥ�������� ���� ����

    for (int i = 0; i < COUNT; i++)                                 // i�� �����ϸ鼭 COUNT�� �ݺ�
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
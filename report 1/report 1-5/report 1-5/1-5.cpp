#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void GenRandSeed();
void GenRandnum(double samples[100]);

void GenRandSeed() // 정수 생성 코드
{
    srand((unsigned int)(time(NULL)));
    return;
}

// 변수 생성
void GenRandnum(double samples[100]) {
    double rn1, rn2, v, k, z;
    int i = 0;
    do {
        rn1 = (double)rand() / 32767;
        rn2 = (double)rand() / 32767; // 0 ~ 1 사이의 난수 발생

        v = sqrt(2 / exp(1.0)) * (2 * rn2 - 1);
        z = v / rn1;
        k = ((double)1 / 4) * z * z;

        if (k < 1 - rn1) {
            samples[i] = z;
            i++;
        }
        else if ((k > (0.259 / rn1) + 0.35) || (k > log(rn1)))
            continue;

    } while (i < 100);
}

int main()
{

    GenRandSeed();

    int i, count;
    double  x1[100], x2[100]; // x1, x2 정규분포 변수 지정
    printf("Accuracy rate calculation results: \n");

    //x1 변수 생성
    GenRandnum(x1);

    //x2 변수 생성
    GenRandnum(x2);

    for (count = 0, i = 0; i < 100; i++) {
        // 명중했는지 판단
        if ((0.8 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
            count++;
    }

    printf("Success: %d/100 -> Probability of success: %.3lf == %.0f%%\n", count, ((double)count / 100), ((double)count / 100) * 100);

    return 0;
}
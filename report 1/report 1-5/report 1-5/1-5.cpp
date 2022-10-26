#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void GenRandSeed();
void GenRandnum(double samples[100]);

void GenRandSeed() // ���� ���� �ڵ�
{
    srand((unsigned int)(time(NULL)));
    return;
}

// ���� ����
void GenRandnum(double samples[100]) {
    double rn1, rn2, v, k, z;
    int i = 0;
    do {
        rn1 = (double)rand() / 32767;
        rn2 = (double)rand() / 32767; // 0 ~ 1 ������ ���� �߻�

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
    double  x1[100], x2[100]; // x1, x2 ���Ժ��� ���� ����
    printf("Accuracy rate calculation results: \n");

    //x1 ���� ����
    GenRandnum(x1);

    //x2 ���� ����
    GenRandnum(x2);

    for (count = 0, i = 0; i < 100; i++) {
        // �����ߴ��� �Ǵ�
        if ((0.8 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
            count++;
    }

    printf("Success: %d/100 -> Probability of success: %.3lf == %.0f%%\n", count, ((double)count / 100), ((double)count / 100) * 100);

    return 0;
}
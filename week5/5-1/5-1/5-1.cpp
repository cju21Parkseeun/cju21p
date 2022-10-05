#include <stdio.h>

int main()
{
    int i;
    int j = 1;

    printf("multiplication table: ");
    scanf_s("%d", &i);

    while (j <= 9)
    {
        printf("%d*%d = %d \n", i, j, i * j);
        j++;
    }
    return 0;

}
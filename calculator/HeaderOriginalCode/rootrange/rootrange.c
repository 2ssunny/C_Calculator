#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rootrange() //소수점 범위내 루트-edit needed
{
    int a, b;
    double c;
    printf("제곱근을 알고 싶은 양수 입력\n:");
    scanf("%d", &a);
    c = sqrt(a);
    printf("소수점 범위 입력(0~6)\n:");
    scanf("%d", &b);
    if (b = 0)
    {
        printf("%.0Lf", c);
    }

    else if (b = 1)
    {
        printf("%.1Lf", c);
    }

    else if (b = 2)
    {
        printf("%.2Lf", c);
    }

    else if (b = 3)
    {
        printf("%.3Lf", c);
    }

    else if (b = 4)
    {
        printf("%.4Lf", c);
    }

    else if (b = 5)
    {
        printf("%.5Lf", c);
    }

    else if (b = 6)
    {
        printf("%.6Lf", c);
    }
}

int main()
{
    rootrange();
    return 0;
}
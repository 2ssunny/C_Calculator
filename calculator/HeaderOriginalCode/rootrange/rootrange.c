#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rootrange() //�Ҽ��� ������ ��Ʈ-edit needed
{
    int a, b;
    double c;
    printf("�������� �˰� ���� ��� �Է�\n:");
    scanf("%d", &a);
    c = sqrt(a);
    printf("�Ҽ��� ���� �Է�(0~6)\n:");
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
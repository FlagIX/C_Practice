#include "stdio.h"
#include<math.h>

void question3_2()
{
    int a, b, c, d;
    scanf_s("%d", &a);
    if (a < 0)
    {
        a = -a;
    }
    if (a < 100 || a > 999)
    {
        return;
    }
    b = a / 100;
    c = a % 100 / 10;
    d = a % 10;
    printf("%d", d * 100 + c * 10 + b);
}

void question3_3()
{
    double deposit;
    double rate = 0.0225;
    double capital = 0;
    int n = 0;
    scanf_s("%lf%d", &capital, &n);
    double tmp = 1;
    for (int i = 0; i < n; ++i) {
        tmp *= rate + 1;
    }
    deposit = capital * tmp;
    printf("%lf", deposit);
}

int main()
{
//    question3_2();
    question3_3();
}
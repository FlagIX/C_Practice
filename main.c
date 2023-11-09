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
    for (int i = 0; i < n; ++i)
    {
        tmp *= rate + 1;
    }
    deposit = capital * tmp;
    printf("%lf", deposit);
}

void question3_4()
{
    int a, b, c;
    scanf_s("%d%d%d", &a, &b, &c);
    double s = sqrt(b * b - 4 * a * c);
    printf("%lf, %lf", (-b + s) / (2 * a), (-b - s) / (2 * a));
}

#define PI 3.1415926

void question3_5()
{
    int r;
    scanf_s("%d", &r);
    // 体积V=(4/3)πr^3
    double v = (4.0 / 3.0) * PI * r * r * r;
    // 表面积S=4πr^2
    double s = 4.0 * PI * r * r;
    printf("v=%lf, s=%lf", v, s);
}

void question3_5_2()
{
    const double const_PI = 3.1415926;
    int r;
    scanf_s("%d", &r);
    // 体积V=(4/3)πr^3
    double v = (4.0 / 3.0) * const_PI * r * r * r;
    // 表面积S=4πr^2
    double s = 4.0 * const_PI * r * r;
    printf("v=%lf, s=%lf", v, s);
}

void question4_4()
{
    char input;
    scanf_s("%c", &input);
    int inputAscii = (int) input;
    if (inputAscii < (int)'a' || inputAscii > (int)'z') {
        printf("The input is not a lowercase English letter!");
        return;
    }
    char result = (char)(inputAscii - ' ');
    printf("%c %d", result, (int)result);
}

int main()
{
//    question3_2();
//    question3_3();
//    question3_4();
//    question3_5();
//    question3_5_2();
    question4_4();
}
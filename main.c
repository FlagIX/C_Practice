#include "stdio.h"

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

}

int main()
{
//    question3_2();
    question3_3();
}
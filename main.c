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
    if (b * b - 4 * a * c <= 0)
    {
        printf("Do not meet the conditions: b^2-4ac > 0");
        return;
    }
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

void question4_3()
{
    char a, b;
    int c;
    scanf_s("%c%c%d", &a, &b, &c);
    printf("%c,%c,%d\n", a, b, c);
}

void question4_4()
{
    char input;
    scanf_s("%c", &input);
    int inputAscii = (int) input;
    if (inputAscii < (int) 'a' || inputAscii > (int) 'z')
    {
        printf("The input is not a lowercase English letter!");
        return;
    }
    char result = (char) (inputAscii - ' ');
    printf("%c %d", result, (int) result);
}

void question5_1()
{
    double num;
    scanf_s("%lf", &num);
    printf("%lf", num < 0 ? -num : num);
}

void question5_2()
{
    int num;
    scanf_s("%d", &num);
    int n = num % 2;
    if (n != 0)
    {
        printf("%d is an odd number", num);
    } else
    {
        printf("%d is an even number", num);
    }
}

void question5_3()
{
    int a, b, c;
    scanf_s("%d%d%d", &a, &b, &c);
    if (a + b <= c || b + c <= a || c + a <= b)
    {
        printf("Cannot form a triangle.");
        return;
    }
    double p = (a + b + c) / 2.0;
    printf("%lf", sqrt(p * (p - a) * (p - b) * (p - c)));
}

void question5_4()
{
    double deposit;
    double rate = 0;
    double capital = 0;
    int n = 0;
    scanf_s("%lf%d", &capital, &n);
    if (n >= 8)
    {
        rate = 0.0300;
    } else if (n >= 5)
    {
        rate = 0.0288;
    } else if (n >= 3)
    {
        rate = 0.0270;
    } else if (n >= 2)
    {
        rate = 0.0243;
    } else if (n >= 1)
    {
        rate = 0.0225;
    }
    deposit = capital + capital * rate;
    printf("%lf", deposit);
}

void question5_6()
{
    int year, flag;
    printf("Enter year:");
    scanf_s("%d", &year);
    flag = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 1 : 0;
    if (flag)
        printf("%d is a leap year!\n", year);
    else
        printf("%d is not a leap year!\n", year);
}

//void question5_7()
//{
//    char input;
//    scanf_s("%c", &input);
//    int inputAscii = (int) input;
//    char result = input;
//    if ((inputAscii >= (int) 'a' && inputAscii <= (int) 'z'))
//    {
//        result = (char) (inputAscii - ' ');
//    }
//    if ((inputAscii >= (int) 'A' && inputAscii <= (int) 'Z'))
//    {
//        result = (char) (inputAscii + ' ');
//    }
//    printf("%c %d", result, (int) result);
//}

void question5_7()
{
    char a;
    scanf_s("%c", &a);
    int b = (int) a;
    char result = a;
    if (b <= 122 && b >= 97)
    {
        result = (char) (b - ' ');
    } else if (b >= 65 && b <= 90)
    {
        result = (char) (b + ' ');
    }
//    if (b >= (int) 'a' && b <= (int) 'z')
//    {
//        result = (char) (b - ' ');
//    }
//    else if (b >= (int) 'A' && b <= (int) 'Z')
//    {
//        result = (char) (b + ' ');
//    }
    printf("%c %d", result, (int) result);
}


void question5_8()
{
    char input;
    scanf_s("%c", &input);
    if (input >= '0' && input <= '9')
        printf("Number");
    else if (input >= 'A' && input <= 'Z')
        printf("Uppercase letters");
    else if (input >= 'a' && input <= 'z')
        printf("Lowercase letters");
    else if (input == ' ')
        printf("Space");
    else
        printf("Other");
}

void question5_9()
{
    int score;
    scanf_s("%d", &score);
    char grade;
    if (score >= 90 && score <= 100)
        grade = 'A';
    if (score >= 80 && score < 90)
        grade = 'B';
    if (score >= 70 && score < 80)
        grade = 'C';
    if (score >= 60 && score < 70)
        grade = 'D';
    if (score >= 0 && score < 60)
        grade = 'E';
    printf("%c", grade);
}

void question6_8()
{
    double sum = 0;
    double limit = 1.0 / (10 * 10 * 10 * 10);   // 10^-4
    double i = 1;   // 累加时的每一项的绝对值，第一项为1，所以初始值设为1
    int j = 1;      // 累加时的每一项的分母，第一项分母为1，所以初始值设为1
    int count = 0;  // 统计累加的项数的变量
    while (1)
    {
        if (i < limit)   // (i < 0 ? -i : i) 取每一项的绝对值 当满足条件：直到最后一项的绝对值小于10^-4时为止 时跳出循环
            break;
        sum += i * (count % 2 == 0 ? 1 : -1);   // sum累加 (count % 2 == 0 ? 1 : -1) 奇数项为负数，累加项绝对值乘以-1  偶数项为正数，累加项绝对值乘以1
        j += 2;         // 每一项的分母是前一项的分母+2
        i = 1.0 / j;    // 计算下一项的绝对值
        count++;        // 累加的项数+1
    }
    printf("PI的近似值是%lf, 累加项数是%d", sum * 4, count);
}

int main()
{
//    question3_2();
//    question3_3();
//    question3_4();
//    question3_5();
//    question3_5_2();
//    question4_3();
//    question4_4();
//    question5_7();
//    question5_1();
//    question5_2();
//    question5_3();
//    question5_4();
//    question5_6();
//    question5_7();
//    question5_8();
//    question5_9();
    question6_8();
}
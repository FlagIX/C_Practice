//#include<stdio.h>
//int main()
//{
//    int k = 4,n;
//    for(n = 0;n<k;n++)
//    {
//        if(n%2==0)continue;
//        k--;
//    }
//    printf("k = %d,n=%d\n",k,n);
//    return 0;
//}



#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>


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
        printf("数字错误\n");
        return;
    }
    b = a / 100;
    c = a % 100 / 10;
    d = a % 10;
    printf("%d", d * 100 + c * 10 + b);
}

void question3_3()
{

    double rate = 0.0225;
    double capital;
    double deposit;
    int n;
    int i;
    double sum = 1;
    scanf_s("%d%lf", &n, &capital);
    for (i = 0; i < n; i++)
    {
        sum *= rate + 1;
    }
    deposit = capital * sum;
    printf("%lf\n", deposit);
}

void question3_4()
{
    double a;
    double b;
    double c;
    scanf_s("%lf%lf%lf", &a, &b, &c);
    double num = b * b - 4 * a * c;
    if (num <= 0)
    {
        printf("数据错误\n");
        return;
    }
    double sum = sqrt(num);
    printf("%lf\n%lf\n", (-b + sum) / (2 * a), (-b - sum) / (2 * a));
}


void question3_5()
{
    const double PI = 3.14159;
    double r;
    double V;
    double S;
    scanf_s("%lf", &r);
    S = 4 * PI * r * r;
    V = (4.0 / 3) * PI * r * r * r;
    printf("%lf\n%lf\n", S, V);
}

void question4_3()
{
    char a, b;
    int c;
    scanf_s("%c%c%d", &a, &b, &c);
    printf("%c,%c,%d", a, b, c);
}

void question4_4()
{
    char a;
    scanf_s("%c", &a);
    int b = (int) a;
    if (b < (int) 'a' || b > (int) 'z')
    {
        printf("错误");
        return;
    }
    char result = (char) (b - 32);
    printf("%c %d", result, (int) result);
}

void question5_1()
{
    double i;
    scanf_s("%lf", &i);
    if (i <= 0)
    {
        i = -i;
        printf("%lf", i);
    } else if (i > 0)
    {
        printf("%lf", i);
    }
}

void question5_2()
{
    int i;
    scanf_s("%d", &i);
    if (i % 2 == 0)
    {
        printf("偶数");
    } else if (i % 2 != 0)
    {
        printf("奇数");
    }
}

void question5_3()
{
    double a;
    double b;
    double c;
    scanf_s("%lf%lf%lf", &a, &b, &c);
    if (a + b <= c)
    {
        printf("不能构成三角形\n");
        return;
    }
    printf("能构成三角形\n");
    double p = (a + b + c) / 2;
    double x = p * (p - a) * (p - b) * (p - c);
    double s = sqrt(x);
    printf("三角形面积是%lf\n", s);
}

void question5_4()
{
    double a, c, d = 0;
    int b;
    scanf_s("%lf%d", &a, &b);
    switch (b)
    {
        case 1:
            d = 0.0225;
            break;
        case 2:
            d = 0.0243;
            break;
        case 3:
            d = 0.027;
            break;
        case 5:
            d = 0.0288;
            break;
        case 8:
            d = 0.03;
            break;
        default:
            printf("错误利率\n");
            break;
    }
    c = a * pow(1 + d, b);
    printf("c=%lf", c);
}

void question5_7()
{
    char a;
    char result;
    scanf_s("%c", &a);
    int b = (int) a;
    if (b <= 122 && b >= 97)
    {
        result = (char) (b - ' ');
    }
    if (b >= 65 && 90 >= b)
    {
        result = (char) (b + ' ');
    }
    printf("%c %d", result, (int) result);
}

void question5_8()
{
    char input;
    scanf_s("%c", &input);
    if (input >= '0' && input <= '9')
    {
        printf("number");
    } else if (input >= 'a' && input <= 'z')
    {
        printf("小写字母");
    } else if (input >= 'A' && input <= 'Z')
    {
        printf("大写字母");
    } else if (input == ' ')
    {
        printf("space");
    } else
    {
        printf("other");
    }
}

void question5_9()
{
    int score;
    scanf_s("%d", &score);
    if (score > 100 || score < 0)
    {
        printf("成绩错误");
    } else if (score >= 0 && score < 60)
    {
        printf("E");
    } else if (score >= 60 && score < 70)
    {
        printf("D");
    } else if (score >= 70 && score < 80)
    {
        printf("C");
    } else if (score >= 80 && score < 90)
    {
        printf("B");
    } else if (score >= 90 && score < 100)
    {
        printf("A");
    }
}

void question5_10()
{
    int year, month, day;
    int sum;
    scanf_s("%d%d%d", &year, &month, &day);
    if (!((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month == 2 && day > 28)
    {
        printf("mistake");
        return;
    }
    switch (month)
    {
        case 1:
            sum = day;
            break;
        case 2:
            sum = 31 + day;
            break;
        case 3:
            sum = 28 + 31 + day;
            break;
        case 4:
            sum = 31 + 28 + 31 + day;
            break;
        case 5:
            sum = 30 + 31 + 28 + 31 + day;
            break;
        case 6:
            sum = 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 7:
            sum = 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 8:
            sum = 31 + 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 9:
            sum = 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 10:
            sum = 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 11:
            sum = 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        case 12:
            sum = 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31 + 28 + 31 + day;
            break;
        default:
            printf("mistake");
            break;
    }
    if (month > 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        sum = sum + 1;
    }
    printf("此天是一年中的第%d天",sum);
}
void question5_11()
{
    double faHeight;
    double moHeight;
    double Height;
    char sports,diet;
    char sex;
    printf("你父亲的身高是？\n");
    scanf_s("%lf",&faHeight);
    printf("你母亲的身高是？\n");
    scanf_s(" %lf",&moHeight);
    printf("你的性别是？\n");
    scanf_s(" %c",&sex);
    printf("你喜欢运动吗？\n");
    scanf_s(" %c",&sports);
    printf("你是否有良好的饮食？\n");
    scanf_s(" %c",&diet);
    if(sex=='F')
    {
        Height = (faHeight+moHeight)*0.54;
    }
    else
    {
        Height = (faHeight*0.923+moHeight)/2;
    }
    if(sports=='Y')
    {
        Height = Height*(1+0.02);
    }
    if(diet=='Y')
    {
        Height = Height*(1+0.015);
    }
    printf("身高为%lf\n",Height);
}

void question5_12()
{
    float t;
    float w;
    float h;
    printf("请输入你的身高(m)\n");
    scanf_s(" %f",&h);
    printf("请输入你的体重（kg）\n");
    scanf_s(" %f",&w);
    t = w/(h*h);
    printf("%f",t);
    if(t<18)
    {
        printf("低体重");
    }
    else if(t>=18&&t<25)
    {
        printf("正常体重");
    }
    else if(t>=25&&t<27)
    {
        printf("超重体重");
    }
    else
    {
        printf("肥胖");
    }
}


void question6_4()
{
    int num;
    int i;
    printf("input a number");
    scanf_s("%d",&num);
    for(i= 1;i<=num;i++)
    {
        printf("%d*%d=%d\n%d*%d*%d=%d\n",i,i,i*i,i,i,i,i*i*i);
    }
}

void question6_5()
{
    int F;
    double C;
    for(F=0;F<=300;F=F+10)
    {
        C = (5.0/9.0)*(F-32);
        printf("华氏度%d度对应摄氏度%lf度\n",F,C);
    }
}

void question6_6()
{
double rate = 0.01875;
int month = 12;
int year = 5;
int education = 1000;
int i;
double deposit = 0;
for(i=0;i<year;i++)
    {
        deposit = (deposit+education)/(1+rate*month);
    }
    printf("第一年他存入%lf元",deposit);
}

void question6_7()
{
    double num = 1000000;
    double rate;
    int year;
    printf("请输入产值增长率\n");
    scanf_s("%lf",&rate);
    for(year=0;num<2000000;year++)
    {
        num = num*(1+rate*year);
    }
    printf("%d年后可实现翻番",year);
}

void question6_7_yzj()
{
    double num = 1000000;
    double rate = 0;
    int year = 0;
    printf("请输入产值增长率\n");
    scanf_s("%lf", &rate);
    while (num < 2000000)
    {
        num *= (1 + rate);
        year++;
    }
    printf("%d年后可实现翻番",year);
}

void question6_8()
{
    double PI;

}



void question6_10()
{
    int i;
    int a,b,c;
    for(i=0;i<=999;i++)
    {
        a = i/100;
        b = i%100/10;
        c = i%10;
        if(i == a*a*a+b*b*b+c*c*c)
        {
            printf("%d\n",i);
        }
    }

}


void question6_11()
{
    int n,m;
    printf("请输入一个值");
    scanf_s("%d",&n);

}


void question6_12()
{
    int a;
    int b;
    int c;
    printf("请输入一些正数\n");
    scanf_s("%d%d%d",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
    {
        printf("输入数据结束");
        return;
    }
    printf("%d",a+b+c);
}


void question6_13()
{
    int a,b,c;
    printf("请输入一些数\n");
    scanf_s("%d%d%d",&a,&b,&c);
    if(a==0||b==0||c==0)
    {
        printf("输入数据错误");
        return;
    }
    if(a<0)
    {
        a=0;
    }
    if(b<0)
    {
        b=0;
    }
    if(c<0)
    {
        c=0;
    }
    printf("%d",a+b+c);
}

void question6_13_yzj()
{
    long sum = 0;
    printf("请输入一些数：\n");
    while (1)
    {
        int input = 0;
        scanf_s("%ld", &input);
        if (input <= 0)
        {
            printf("输入负数或零，结束！");
            break;
        }
        sum += input;
    }
    printf("正数和是%ld", sum);
}

void question6_14()//穷举法=嵌套循环
{
    int a,b,c;
    int sum;
    for(a=0;a<=30;a++)
    {
        for(b=0;b<=30;b++)
        {
            for(c=0;c<=30;c++)
            {
                if(a+b+c==30&&3*a+2*b+c==50)
                {
                    printf("男人有%d人女人有%d人小孩有%d人\n",a,b,c);
                }
            }
        }
    }

}

void question6_15()
{
    int x,y;
    for(x=0;x<=98;x++)
    {
        for(y=0;y<=98;y++)
        {
            if(y+x==98&&2*x+4*y==386)
            {
                printf("鸡有%d只兔有%d只\n",x,y);
            }
        }
    }
}

void question6_16()
{
    int x,y,z;
    for(x=0;x<=100;x++)
    {
        for(y=0;y<=100;y++)
        {
            for(z=0;z<=100;z++)
            {
                if(x+y+z==100&&5*x+3*y+z/3.0==100)
                {
                    printf("公鸡有%d只母鸡有%d只小鸡有%d只\n",x,y,z);
                }
            }
        }
    }
}

void question6_17()
{
    int x,y,z;
    for(x=1;x<50;x++)
    {
        for(y=1;y<50;y++)
        {
            for(z=1;z<50;z++)
            {
                if(x+y+z==50&&10*x+5*y+z==100)
                {

                    printf("十元有%d张\n五元有%d张\n一元有%d张\n",x,y,z);
                }
            }
        }
    }
}
int main()
{
//     question3_2();
//     question3_3();
    // ctrl + /
    //   question3_4();
    //question3_5();
    //question4_3();
    //question4_4();
    //question5_1();
    //question5_2();
    //question5_3();
    //question5_4();
    //question5_7();
    //question5_8();
    //question5_9();
    //question5_10();
    //question5_11();
    //question5_12();
    //question6_4();
    //question6_5();
    //question6_6();
//    question6_7();
    question6_7_yzj();
    //question6_8();
    //question6_10();
    //question6_11();
    //question6_12();
    //question6_13();
    //question6_14();
    //question6_15();
    //question6_16();
//    question6_17();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition(double a,double b)
{
    double c=0;
    c=a+b;
    printf("%.1lf",c);

}

void subtraction(double a,double b)
{
    double c=0;
    c=a-b;
    printf("%.1lf",c);

}

void multiplication(double a,double b)
{
    double c=0;
    c=a*b;
    printf("%.1lf",c);

}

void division(double a,double b)
{
    double c=0;
    c=a/b;
    printf("%.1lf",c);

}

void power(double a,double m)
{
    double c=0;
    c=pow(a,m);
    printf("%.1lf",c);

}

void modulus(double a,double b)
{
    double c=0;
    c=(int)a % (int)b;
    printf("%.1lf",c);

}

void squareroot(double a)
{
    double c=0;
    c=sqrt(a);
    printf("%.1lf",c);

}

int main()
{
    char op;
    double a,b,m;
    printf("Enter your operator:");
    scanf("%s",&op);
    switch (op){
    case '+':
        scanf("%lf %lf",&a,&b);
        addition(a,b);
        break;
    case '-':
        scanf("%lf %lf",&a,&b);
        subtraction(a,b);
        break;
    case '*':
        scanf("%lf %lf",&a,&b);
        multiplication(a,b);
        break;
    case '/':
        scanf("%lf %lf",&a,&b);
        division(a,b);
        break;
    case '^':
        scanf("%lf %lf",&a,&m);
        power(a,m);
        break;
    case '%':
        scanf("%lf %lf",&a,&b);
        modulus(a,b);
        break;
    case 's':
        scanf("%lf",&a);
        squareroot(a);
        break;

    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int x=ceil(4.2);
    printf("ceil-> %d\n", x);
    int y=floor(4.9);
    printf("floor-> %d\n", y);
    int z=round(4.6);
    printf("round-> %d\n", z);
    int a=round(4.5);
    printf("round-> %d\n", a);
    int b=round(4.4);
    printf("round-> %d\n", b);
    int c=sqrt(25);
    printf("sqrt-> %d\n", c);
    int d=sqrt(20);
    printf("sqrt-> %d\n", d);
    double e=sqrt(20);
    printf("sqrt-> %lf\n", e);
    int f=pow(3,2);
    printf("power-> %d\n", f);
    int g=abs(-10);
    printf("absolate value-> %d\n", g);
  
    return 0;
}
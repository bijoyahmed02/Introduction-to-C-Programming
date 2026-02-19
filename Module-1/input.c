#include<stdio.h>
int main()
{
    int a;
    float f;
    char c;
    int num=10;
    long long int l=100000000000;
    double d=31414.568689;
    scanf("%d",&a);
    scanf("%f %c",&f,&c);
    printf("%d\n",a);
    printf("%f %c\n",f,c);
    printf("%lld\t",l);
    printf("%lf\n",d);
    printf("Number is = %d",num);
    return 0;
}
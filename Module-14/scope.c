#include<stdio.h>

int z=25;//global variabe
int sum()
{
    int x=10;
    printf("sum-->%d\n",x);
    printf("sum-->%d\n",z);
}
int main()
{
    int y=20;
    printf("main-->%d\n",y);
    printf("main-->%d\n",z);
    sum();
    return 0;
}
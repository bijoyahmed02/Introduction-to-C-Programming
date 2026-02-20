#include<stdio.h>

int sum()
{
    int num1=10,num2=20;
    int ans = num1+num2;
    return ans;
}
int main()
{
    int val1=sum();
    printf("%d", val1);
    return 0;
}
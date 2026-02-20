#include<stdio.h>

int sum(int num1, int num2)
{
    int ans = num1+num2;
    return ans;
}
int sub(int num1, int num2)
{
    int ans = num1-num2;
    return ans;
}
int main()
{
    int val1=sum(10,20);
    int val2=sub(30,20);
    printf("%d %d", val1,val2);
    return 0;
}
#include<stdio.h>
void fun(int* pre)
    {
        *pre=20;
    }
int main()
{
    int x=10;
    fun(&x);
    printf("%d", x);

    return 0;
}
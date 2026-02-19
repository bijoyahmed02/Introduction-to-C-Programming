#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=-1 && N<=100)
    {
        N=N+5;
        printf("%d",N);
    }
    else
    {
        printf("Out of range");
    }

    return 0;

}
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=-1000 && N<=1000)
    {
        if(N==0)
        {
            printf("Zero");
        }
        else
        {
            printf("Non Zero");
        }
    }
    else
    {
        printf("Out of range");
    }

    return 0;

}
#include<stdio.h>
int main()
{   
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Burger needed\n");
    }
    else if(tk>=50)
    {
        printf("Fuska needed\n");
    }
    else
    {
        printf("Dose not needed anything");
    }
    return 0;
}
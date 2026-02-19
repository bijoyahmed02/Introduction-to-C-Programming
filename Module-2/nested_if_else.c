#include<stdio.h>
int main()
{   
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Go to Cox's Bazar\n");
    if(tk>=10000)
        {
        printf("Go to Saint martin\n"); 
        }
        else
        {
            printf("Will not go to Saint martin\n");
        }
    }
    else
    {
        printf("Will not go to anything");
    }
    return 0;
}

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int star=1;
  int space=n-1;
  for(int i=1; i<=n; i++)
  {
    if(i%2==0)
    {
    for(int k=1; k<=space; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=star; j++)
    {
        printf("-");
    }
    }
    else if(i%2!=2)
    {
       for(int k=1; k<=space; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=star; j++)
    {
        printf("#");
    } 
    }
    printf("\n");
    star+=2;
    space--;
  }
  star=star-4;
  space=1;
  for(int i=n-1; i>=1; i--)
  {
    if(i%2==0)
    {
     for(int k=1; k<=space; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=star; j++)
    {
        printf("-");
    }   
    }
    else if(i%2!=0)
    {
    for(int k=1; k<=space; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=star; j++)
    {
        printf("#");
    }
    }
    printf("\n");
    star-=2;
    space++;
  }
    return 0;
}
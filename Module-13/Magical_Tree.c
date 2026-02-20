#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int M=5;
  for(int i=1; i<=N; i++)
  {
    if(i%2!=0)
    {
        M++;
    }
  }
  int star=1;
  int space=M-1;
  for(int i=1; i<=M; i++)
  {
    for(int k=1; k<=space; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=star; j++)
    {
        printf("*");
    }
    printf("\n");
    star+=2;
    space--;
  }
  for(int i=1; i<=5; i++)
  {
    for(int k=1; k<=5; k++)
    {
        printf(" ");
    }
    for(int j=1; j<=N; j++)
    {
        printf("*");
    }
    printf("\n");
    space--;
  }
    return 0;
}
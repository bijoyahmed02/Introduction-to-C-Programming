#include<stdio.h>
void hello(int n,int i)
{
    if(i<1)
    {
        return;
    }
    printf("%d",i);
    if(i!=1)
    {
        printf(" ");
    }
    hello(n,i-1);
}
int main()
{
  int n;
  scanf("%d", &n);
  int i=n;
  hello(n,i);
  return 0;
}
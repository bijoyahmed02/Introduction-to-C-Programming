#include<stdio.h>
int fun(int X, int Y)
{
    int sum = X+Y;
    return sum;
}
int main()
{
  int X,Y;
  scanf("%d %d",&X,&Y);
  int result=fun(X,Y);
  printf("%d\n",result);
    return 0;
}
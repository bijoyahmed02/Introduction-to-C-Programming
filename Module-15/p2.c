#include<stdio.h>
void fun(int n)
  {
    int i;
    for(i=1; i<=n; i++)
    printf("%d ", i);
  }
int main()
{
   int n;
   scanf("%d",&n);
   fun(n);
    return 0;
}
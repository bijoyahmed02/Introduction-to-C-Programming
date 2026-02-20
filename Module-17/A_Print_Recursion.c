#include<stdio.h>
void fun(int n, int i)
{
    if(i==n)
    {
        return;
    }
    printf("I love Recursion\n");
    fun(n,i+1);
}
int main()
{
  int n,i=0;
  scanf("%d",&n);
  fun(n,i);
  return 0;
}
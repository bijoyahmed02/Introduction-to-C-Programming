#include<stdio.h>
int main()
{
  int x=10;
  printf("%d\n", x);
  printf("%p\n", &x);
  int *pre;
  pre= &x;
  *pre=20;
  printf("%p\n", pre);
  printf("%p\n", &pre);
  printf("%d\n", *pre);
    return 0;
}
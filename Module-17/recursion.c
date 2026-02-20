#include<stdio.h>
void hello()
{
    printf("hello\n");
    hello();
}
int main()
{
  printf("Hi\n");
  hello();
    return 0;
}
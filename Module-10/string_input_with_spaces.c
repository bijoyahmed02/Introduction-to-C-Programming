#include<stdio.h>
int main()
{
  char s[50];
  fgets(s,14,stdin);
  printf("%s\n",s);
  printf("%d",strlen(s));
    return 0;
}
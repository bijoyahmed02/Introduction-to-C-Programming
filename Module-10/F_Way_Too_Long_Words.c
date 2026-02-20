#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  char s[101];
  scanf("%s",s);
  int lengh = strlen(s);
    if(lengh<=10)
    {
        printf("%s\n",s);
    }
    else
    {
        printf("%c%d%c\n",s[0],lengh-2,s[lengh-1]);
    }
}

    return 0;
}
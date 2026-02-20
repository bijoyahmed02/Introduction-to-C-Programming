#include<stdio.h>
#include<string.h>
int main()
{
  char s[1001];
  scanf("%s",s);
  int i=0;
  int j=strlen(s)-1;
  int palindrome=1;
  while (i<j)
  {
    if(s[i]!=s[j])
    {
        palindrome=0;
        break;
    }
    i++;
    j--;
  }
  if(palindrome)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  

    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  while (n--)
  {
    char s[51],t[51];
    scanf("%s %s",s,t);
    int max=strlen(s)+strlen(t);
    for(int i=0; i<=max; i++)
    {
        if(i<strlen(s))
        {
            printf("%c",s[i]);
        }
        if(i<strlen(t))
        {
            printf("%c",t[i]);
        }
    } 
    printf("\n");  
   
  }
  
    return 0;
}
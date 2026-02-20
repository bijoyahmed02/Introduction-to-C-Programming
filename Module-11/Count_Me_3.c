#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    char s[10001];
    scanf("%s", s);
    int fre[3]={0};
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            fre[0]++;
        }
        else if(s[i]>='a' && s[i]<= 'z')
        {
            fre[1]++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            fre[2]++;
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("%d ", fre[i]);
    }
    printf("\n");
  }
    return 0;
}
#include<stdio.h>
 int Lucky(int n)
 {
    while (n>0)
    {
        int digit=n%10;
        if(digit!=4 && digit!=7)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
    
 }
int main()
{
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
  {
    if(Lucky(i) && n%i==0)
    {
        printf("YES\n");
        return 0;
    }
  }
    printf("NO\n");
    return 0;
}
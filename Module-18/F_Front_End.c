#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  long long int a[n];
  for(int i=0; i<n; i++)
  {
    scanf("%lld",&a[i]);
  }
  int i=0;
  int j=n-1;
  while (i<=j)
  {
    if(i<j)
    {
      printf("%lld %lld ",a[i],a[j]);  
    }
    if(i==j)
    {
        printf("%lld",a[i]);
    }
    i++;
    j--;
  }
  
    return 0;
}
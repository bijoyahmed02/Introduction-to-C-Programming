#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  long long int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%lld", &arr[i]);
  }
  int sum_p=0, sum_n=0;
  for(int i=0; i<n; i++)
  {
    if(arr[i]>0)
    {
        sum_p = sum_p+arr[i];
    }
    else
    {
        sum_n = sum_n+arr[i];
    }
  }
  printf("%d %d", sum_p, sum_n);
    return 0;
}
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  long long int arr[n];
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&arr[i]);
  }
  int min_idx=0;
  int max_idx=0;
  for(int i=0;i<n;i++)
  {
    if(arr[min_idx]>arr[i])
    {
        min_idx=i;
    }
    else if(arr[max_idx]<arr[i])
    {
        max_idx=i;
    }
  }
    int tmp=arr[min_idx];
    arr[min_idx]=arr[max_idx];
    arr[max_idx]=tmp;
    for(int i=0;i<n;i++)
    {
       printf("%lld ", arr[i]);
    }
    return 0;
}
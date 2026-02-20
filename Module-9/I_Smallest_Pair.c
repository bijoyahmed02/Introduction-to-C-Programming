#include<stdio.h>
#include<limits.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    int n;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int min=LLONG_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
        long long int result=arr[i]+arr[j]+j-i;
        if(result<min)
        {
            min=result;
        }
        }
    }
    printf("%lld\n",min);

  }

    return 0;
}
#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  long long int arr[n];
  for(int i=1; i<=n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int low=arr[1];
    int index=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]<low)
        {
            low=arr[i];
            index=i;
        }
    }
    printf("%lld %d",low,index);

    return 0;
}
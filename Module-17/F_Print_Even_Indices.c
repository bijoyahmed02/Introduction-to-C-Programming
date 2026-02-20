#include<stdio.h>
void print_an_array(long long int arr[],int n, int i)
{
    if(i<0)
    {
        return;
    }
    if(i%2==0)
    {
        printf("%lld",arr[i]);
        printf(" ");
    }

    print_an_array(arr,n,i-1);
}
int main()
{
  int n;
  scanf("%d",&n);
  long long int  arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%lld", &arr[i]);
  }
  print_an_array(arr,n,n-1);
    return 0;
}
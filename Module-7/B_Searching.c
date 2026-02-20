#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int x,found=-1;
  scanf("%d", &x);
  for(int i=0; i<n; i++)
  {
    if(arr[i]==x)
    {
      found=i;
      break;
    }
  }
  printf("%d",found);

    return 0;
}
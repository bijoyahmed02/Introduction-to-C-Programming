#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int fre[m+1];
  for(int i=1; i<m+1; i++)
  {
    fre[i]=0;
  }
  for(int i=0; i<n; i++)
  {
    int val=arr[i];
    fre[val]++;
  }
  for(int i=1; i<m+1; i++)
  {
    printf("%d\n",fre[i]);
  }

    return 0;
}
#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int ar[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&ar[i]);
  }
  int fre[2]={0};
  for(int i=0; i<n; i++)
  {
    int val=ar[i];
    if(val%2==0 || val%2==0 && val%3==0)
    {
        fre[0]++;
    }
    else if(val%3==0)
    {
        fre[1]++;
    }
  }
  for(int i=0; i<2; i++)
  {
    printf("%d ", fre[i]);
  }

    return 0;
}
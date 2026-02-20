#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0; i<N; i++)
  {
    scanf("%d", &A[i]);
  }
  int min=A[0];
  int count=0;
  for(int i=0; i<N; i++)
  {
    if(min>A[i])
    {
        min=A[i];
    }  
  }
  for(int i=0; i<N; i++)
  {
    if(A[i]==min)
    {
        count++;
    }  
  }
  if(count%2==0)
  {
    printf("Unlucky\n");
  }
  else if(count%2!=0)
  {
    printf("Lucky\n");
  }
    return 0;
}
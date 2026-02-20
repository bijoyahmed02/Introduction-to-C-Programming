#include<stdio.h>
void fun(int A[],int N,int i)
{
    int min=A[0];
    int max=A[0];
    for(int i=0; i<N; i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }
        if(max<A[i])
        {
            max=A[i];
        }
    }
    printf("%d %d\n", min, max);
}
int main()
{
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0; i<N; i++)
  {
    scanf("%d",&A[i]);
  }
  fun(A,N,0);
    return 0;
}
#include<stdio.h>
long long int fun(long long int A[], int N,int i)
{
    if(i==N-1)
    {
        return A[i] ;
    }
    long long int max= fun(A,N,i+1);
    if(A[i]>max)
    {
        return A[i];
    }
    else{
        return max;
    }
}
int main()
{
  int N;
  scanf("%d",&N);
  long long A[N];
  for(int i=0; i<N; i++)
  {
    scanf("%lld",&A[i]);
  }
   fun(A,N,0);
   long long int ans = fun(A,N,0);
   printf("%lld\n", ans);

    return 0;
}
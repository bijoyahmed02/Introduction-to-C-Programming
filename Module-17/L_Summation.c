#include<stdio.h>
long long int sum=0;
void fun(long long int A[],int N, int i)
{
    if(i==N)
    {   printf("%lld\n",sum);
        return;
    }
    sum+=A[i];
    fun(A,N,i+1);
}
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%lld",&A[i]);
    }
    fun(A,N,0);
    return 0;
}
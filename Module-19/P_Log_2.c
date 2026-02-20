#include<stdio.h>
long long int fun(long long int N)
{
    if(N==1)
    {
        return 0;
    }
    return 1+fun(N/2);
}
int main()
{
  int long long N;
  scanf("%lld",&N);
  fun(N);
  printf("%lld",fun(N));
    return 0;
}
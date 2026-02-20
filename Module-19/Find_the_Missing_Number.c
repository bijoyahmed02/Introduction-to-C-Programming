#include<stdio.h>
int main()
{
  int T;
  scanf("%d",&T);
  for(int i=0; i<T; i++)
  {
    long long int M;
    int A,B,C;
    scanf("%lld %d %d %d",&M,&A,&B,&C);
    long long int x=A*B*C;
    long long int y =(M/x);
    if(x==0)
    {
        if(M==0)
        {
            printf("%lld\n",y);
        }
        else
        {
            printf("-1\n");
        }
    }
    else
    {
        if(M%x==0)
        {
            printf("%lld\n",y);
        }
        else{
            printf("-1\n");
        }
    }
  }
  
    return 0;
}
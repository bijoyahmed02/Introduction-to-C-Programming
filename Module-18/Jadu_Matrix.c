#include<stdio.h>
#include<stdbool.h>
int main()
{
  int N,M;
  scanf("%d %d",&N,&M);
  int A[N][M];
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<M; j++)
    {
        scanf("%d", &A[i][j]);
    }
  }
  int is_diagonal=true;
  if(N==M)
  {
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(i==j || i+j==N-1 )
            {
                if(A[i][j]!=1)
                {
                    is_diagonal=false;
                    break;
                }
            }
            else
            {
                if(A[i][j]!=0)
                {
                    is_diagonal=false;
                    break;
                }
            }
        }
    }
    if(is_diagonal==true)
    {
        printf("YES\n");
    }
    else    
    {
        printf("NO\n");
    }
  }
  else{
    printf("NO\n");
  }
    return 0;
}
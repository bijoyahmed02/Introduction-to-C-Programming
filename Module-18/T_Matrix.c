#include<stdio.h>
#include<stdlib.h>
int main()
{
  int N;
  scanf("%d",&N);
  int A[N][N];
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
    {
      scanf("%d",&A[i][j]);  
    }
    
  }
   int primary_diagonal=0,secondary_diagonal=0;
   int dif;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(i+j==N-1)
                {
                    primary_diagonal+=A[i][j];
                }
                if(i==j)
                {
                    secondary_diagonal+=A[i][j];
                } 
            }
        
        }
        dif=abs(primary_diagonal-secondary_diagonal);
        printf("%d\n",dif);

    return 0;
}
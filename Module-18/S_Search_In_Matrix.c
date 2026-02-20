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
      scanf("%d",&A[i][j]);  
    }
    
  }
   int X;
   scanf("%d",&X);
   bool found=true;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(A[i][j]==X)
                {
                    found=false;
                    break;
                } 
            }
            if(found==false)
            {
                break;
            }
        
        }
       if(found==true)
       {
        printf("will take number\n");
       }
       else
       {
        printf("will not take number\n");
       }
    return 0;
}
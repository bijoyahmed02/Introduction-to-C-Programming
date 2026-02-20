#include<stdio.h>
int main()
{
  int arr[5][5];
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
        scanf("%d",&arr[i][j]);
    }
  }
  int x,y;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
        if(arr[i][j]==1)
        {
            x=i+1;
            y=j+1;
        }
    }
  }
  int moves=abs(3-x)+abs(3-y);
  printf("%d\n",moves);
 
  
    return 0;
}
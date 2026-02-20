#include<stdio.h>
void odd_even()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    int count_even=0;
    int count_odd=0;
    for(int j=0; j<N; j++)
    {
        if(A[j]%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("%d %d\n",count_even,count_odd);

}
int main()
{
    odd_even();
    return 0;
}
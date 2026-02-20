#include<stdio.h>
int main()
{
  long long int A,B,C;
  scanf("%lld %lld %lld", &A, &B, &C);
  if(A<=B&&A<=C)
  {
    printf("%lld\n",A);
  }
  else if(B<=A&&B<=C)
  {
    printf("%lld\n",B);
  }
  else
  {
    printf("%lld\n",C);
  }
  if(A<=B&&A>=C || A>=B&&A<=C)
  {
    printf("%lld\n",A);
  }
  else if(B<=A&&B>=C ||B>=A&&B<=C)
  {
    printf("%lld\n",B);
  }
  else 
  {
    printf("%lld\n",C);
  }
  if(A>=B&&A>=C)
  {
    printf("%lld\n",A);
  }
  else if(B>=A&&B>=C)
  {
    printf("%lld\n",B);
  }
  else
  {
    printf("%lld\n",C);
  }
  printf("\n");
  printf("%lld\n%lld\n%lld\n",A,B,C);
    return 0;
}
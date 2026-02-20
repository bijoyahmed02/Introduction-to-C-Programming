#include<stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    int m1,m2,d;
    scanf("%d %d %d", &m1,&m2,&d);
    int f_day;
    f_day= d-((m1*d)/(m1+m2));
    printf("%d\n",f_day);
  }
    return 0;
}
#include<stdio.h>
int main()
{
   char ch, next;
   scanf("%c", &ch);
   if(ch>= 97 && ch<=122)
   {    
        if(ch == 'z')
            {
            next = 'a';
            }
        else
            {
            next = ch + 1;
            }
            printf("%c", next);
   }
   
    return 0;
}
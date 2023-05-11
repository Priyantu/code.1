#include<stdio.h>
int main()
{
   int a,b;
   a=1;
   while(a<=5){
        b=a;
       while(b<=5){
           printf("* ");
           b++;
       }
       printf("\n");
       a++;
   }

    return 0;
}

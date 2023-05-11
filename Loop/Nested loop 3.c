//Write a c Program output is *****
//                            ****
//                            ***
//                            **
//                            *
#include<stdio.h>
int main()
{
   int a,b;

   for(a=1;a<=5;a++){       //line ar jono
       for(b=a;b<=5;b++){
           printf("*");
       }
       printf("\n");
   }

    return 0;
}




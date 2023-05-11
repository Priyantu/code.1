// Write a for loop which will print Summation of all the number which are divided by 3 and 5 between 30 to
//120?
#include<stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 30; i <= 120; i++)
        {
      if(i % 3 == 0 && i % 5 == 0){
        sum = sum +i;
      }
    }
    printf("Summation: %d\n", sum);

    return 0;
}


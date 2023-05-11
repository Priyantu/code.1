#include<stdio.h>
int main()
{
    int i;
    for(i = 100 ;i >= 0; i= i-10)
    {
        printf("%d\n", i);
    }
    printf("Out of The Loop");
    return 0;
}

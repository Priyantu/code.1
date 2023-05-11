#include<stdio.h>
int main()
{
    int x=5;
    printf("value of a: %d\n",x++);
    printf("value of a: %d\n",++x);

    x=5;
    printf("value of a: %d\n",++x);
    printf("value of a: %d\n",x++);
    printf("value of a: %d\n",x);

    return 0;
}



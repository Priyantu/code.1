#include<stdio.h>
int main()
{
    int i,j;

    for(i = 1; i <= 3; i++){
        printf("Outer loop start\n");
        for (j = 1; j <= 3; j++){
            printf("*********************** inner loop\n");
        }
        printf("outer loop end\n");
    }

    return 0;
}

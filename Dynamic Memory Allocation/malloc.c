#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated.\n");
    }else{
        printf("Memory allocation successful.\n");
    }

    return 0;
}

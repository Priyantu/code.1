#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr 1, *ptr 2;
    ptr 1 = (int *)malloc(20);
    ptr 2 = (int *)calloc(5, sizeof(int));
    if(ptr 1 == NULL || ptr 2 == NULL){
        printf("Memory not allocated.\n");
    }else{
        printf("Memory allocation successful.\n");
        ptr 1 = realloc(ptr1, 50);
        printf("Memory reallocation successful.\n");
    }

    return 0;
}


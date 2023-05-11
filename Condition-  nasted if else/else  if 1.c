#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    if(x == 10){
        printf("hi\n");
    }else if(x == 60){
        printf("hallo\n");
    }else if(x == 50){
        printf("Galo\n");
    }else{
        printf("Error input.\n");
    }

    return 0;
}


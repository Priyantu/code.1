//Write a C program which will take a word as input from the user and print the length of the
//string without using any built in function.
#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name:\n");
    scanf("%s", name);

    int i = 0, counter = 0;
    while(name[i] != '\0'){
        counter++;
        i++;
    }
    printf("Length of name is : %d\n", counter);


    return 0;
}




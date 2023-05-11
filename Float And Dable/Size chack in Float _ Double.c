//Suppose you are planning to make a simple calculator. You calculator has four functions- add(),
//subtract(),multiply(),and divide().Each of these function takes two floating point number as input
//and returns the result after applying the corresponding operation. Scan different values from the
//user and test these four functions with these input.
#include<stdio.h>
float add(float a, float b){
    return a + b;
 }
 float subtract(float a, float b){
    return a - b;
 }
 float multiply(float a, float b){
    return a * b;
 }
 float divide(float a, float b){
    return a / b;
 }
int main()
{
    float a,b;
    printf("Enter the value of a and b: \n");
    scanf("%f%f", &a,&b);
    float add_result = add(a, b);
    float subtract_result = subtract(a, b);
    float multiply_result = multiply(a, b);
    float divide_result = divide(a, b);

    printf("Add: %f, Subtract: %f, Multiply: %f, Divide: %f\n", add_result, subtract_result, multiply_result, divide_result);
return 0;
}

y
//+,-,*,/ ar uttor aksata pata gala a code hoba.

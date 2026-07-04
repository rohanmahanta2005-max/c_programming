#include<stdio.h>
int main (){
    float x;
    printf("Enter a Decimal Number: ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x-y;
    printf("fractional part of %f is %f",x,z);
    return 0;
}
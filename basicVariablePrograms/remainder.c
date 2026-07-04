#include <stdio.h>
int main()
{
    int a,b; //a>b
    printf("Enter Divident: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    int q = a/b; //q stands for quotient
    int r = a-b*q; //r stands for remainder //Divisor * Quotiet + Remainder = Divident
    printf("\nThe Remainder when %d is divided by %d is = %d",a,b,r);
    return 0;
}
#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    
    
    if(a>b && a>c){
        printf("\nfirst number is greatest.");
    }
    if(b>a && b>c){
        printf("\nsecond number is greatest .");
    }
    if(c>a && c>b){
        printf("\nthird number is greatest .");
    }
    
    return 0;
}
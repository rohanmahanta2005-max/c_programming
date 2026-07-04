#include<stdio.h>
int fact(int);

int main(){                     /// wrong code
int fact=1;
int n;
printf("Enter a Number: ");
scanf("%d",&n);
fact = fact(n)
printf("The factorial of %d is %d",n,fact);

    return 0;
}

int fact(int a ){
    for(int i=1;i<=a;i++){
        fact = fact*a;
    }
    return fact;
}
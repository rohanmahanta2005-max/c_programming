#include<stdio.h>
int main ()
{
int n;
printf("Enter a Number: ");
scanf("%d",&n);
int fact=1;
for( int i=1;i<=n;i++){
     
 fact=fact*i; 

 
printf("\nThe factorial of %d is: %d",i,fact);
}


    return 0;
}
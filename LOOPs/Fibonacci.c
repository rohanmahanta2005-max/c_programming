#include<stdio.h>
int main(){
int n;
printf("Enter a Number : ");
scanf("%d",&n);
int a = 0;
int b = 1;
int sum ;

for(int i=1;i<=n;i++)
{
     printf(" %d", a);
    sum = a + b;
   
   a = b;               //0 1 1 2 3 5 8 13 21 34 55 89 ..........upto nth (fibonacci series)
   b = sum;  
  
 
  // every term will be the sum of two previous terms
}

    return 0;
}
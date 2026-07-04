#include<stdio.h>
int main (){
int n,lastdigit,rev=0;
int p;
int m=n;
printf("Enter A Number: ");
scanf("%d",&n);
while(n!=0){

lastdigit=n%10;

rev = (rev*10)+lastdigit;

n = n/10;

}

printf("The Reversed number is %d",rev);

p= m + rev;
printf("\nthe sum of the number and its reverse is %d",p);
  return 0;
}
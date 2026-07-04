#include<stdio.h>
int main (){
 int n,lastdigit,rev=0;
 printf("Enter a number: ");
 scanf("%d",&n);
 int m=n;
 while(n!=0){
    lastdigit=n%10;
    rev = rev*10 + lastdigit;
    n=n/10;

 }
 printf("\n%d",rev);
 
if(m==rev){
    printf("\nThe number is Palindrome");
}
else{
    printf("\nNot a Palindrone");
}

 

return 0;
}
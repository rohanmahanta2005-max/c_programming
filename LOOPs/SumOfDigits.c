#include<stdio.h>
int main(){
int n,lastdigit=0;
printf("Enter a number: ");
scanf("%d",&n);
int sum = 0;  
while(n!=0){
   lastdigit = n%10;
   sum = sum + lastdigit;
   n = n/10;
   
} 

printf("The sum of the digits =%d",sum);
    return 0;

}

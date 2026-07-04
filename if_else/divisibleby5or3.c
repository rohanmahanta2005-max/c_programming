#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    if(n%5==0 || n%3==0){
        printf("It is  divisible by 5 or 3 .");
    }
    else{
        printf("It is not divisible 5 or 3 .");
    }
    
    return 0;
}
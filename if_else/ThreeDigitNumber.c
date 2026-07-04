#include<stdio.h>
int main (){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    if(n>99 && n<=999){
        printf("It is a three digit Number.");
    }
    else{
        printf("It is not a three digit Number.");
    }
    
    return 0;
}
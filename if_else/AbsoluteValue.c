#include<stdio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if(x<0){
        x = x*(-1);

    }
    printf("the Absolute Value is : %d",x);
    return 0;
}
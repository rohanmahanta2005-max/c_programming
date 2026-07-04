#include <stdio.h>
int main(){
    int x;
    printf("Enter your Number: ");
    scanf("%d",&x);
    if(x%5==0){
        printf("It is divisible by 5");

    }
    else{
        printf("It is not divisible by 5");
    }
    return 0;
}
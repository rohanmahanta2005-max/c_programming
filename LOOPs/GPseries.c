#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int a=3;
    for(i=1;i<=n;i++){
        printf("%d ",a);
       a=a*4;
    }
    return 0;
}
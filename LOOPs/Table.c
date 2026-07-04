#include<stdio.h>
int main(){
    int i,num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",num,i,num*i);
        if(i==5){
            break;
        }
    }

    return 0;
}
#include<stdio.h>
int main(){
    int cp,sp,z;
    printf("Enter Cost Price : ");
    scanf("%d",&cp);
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    if(cp<sp){
        printf("Wohhoo! You have made a profit");

    }
    else if(cp>sp){
        printf("sorry you have made a loss");
    }
    else if(cp==sp){
        printf("No profit ,No loss");
    }
    z = sp-cp;
    printf("\n\nYour Profit or Loss : Rs.%d ",z);
    return 0;
}
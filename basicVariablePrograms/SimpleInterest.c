#include <stdio.h>
int main (){
    float p,r,t,si; //4 boxes create hoye jay
    
    printf("Enter Principal: ");
    scanf("%f",&p);
     
    printf("Enter Rate: ");
    scanf("%f",&r);
    
    printf("Enter Time: ");
    scanf("%f",&t);

    si = (p*r*t)/100;

    printf("calculated simple interest:%f",si);
    return 0;
}
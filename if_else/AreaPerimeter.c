#include <stdio.h>
int main (){
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
   printf("Enter breath : ");
    scanf("%d",&b);
    int a = l * b;
    int p = 2 * (l+b);

    printf("Area is %d \nPerimeter is %d",a,p);
    if(a>p){
        printf("\n\nHence Area is greater");

    } 
    if(a<p){
        printf("\n\nHence Perimeter is greater");
    }
    if(a == p){
        printf("\n\nArea and Perimeter is Equal");
    }
    return 0;
}
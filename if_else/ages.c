#include<stdio.h>
int main()
{
    int a;
    printf("Enter Ram's age : ");
    scanf("%d",&a);
    int b;
    printf("Enter shyam's age : ");
    scanf("%d",&b);
    int c;
    printf("Enter ajay's age : ");
    scanf("%d",&c);
    if(a<b && a<c){
    printf("ram is younger than everyone");
    }
    if(b<c && b<a){
     printf("shyam is younger than everyone");
    }
    if(c<a && c<b){
    printf("ajay is younger than everyone");    
    }
    return 0;
}
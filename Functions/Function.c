#include<stdio.h>

                            //Function Prototype
int sum(int,int);

int main(){
    int x,y;
     printf("Enter 2 data: ");
     scanf("%d %d",&x,&y);  
                                    //Function Call
    int add = sum(x,y);
    printf("The sum is: %d",add);
    return 0;
}
                                     //Function DEclaration


int sum(int a, int b){
  int addition = a+b ;
    return addition;
}
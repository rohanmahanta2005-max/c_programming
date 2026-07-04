#include<stdio.h>
int main(){
   int a = 5;                       //int* is a variable to store pointer 
   int* x = &a;
   printf("%p\n",x);               //&a means address of a..
   printf("%p\n",&x);                                  //"%p" se address print hota hain..

    return 0;
}
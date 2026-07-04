#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=2;i<n-1;i++){
        if(n%i == 0){
      printf("\nthe given number is not Prime");
        return 0;
        }
        
    
      }
      printf("\nthe given number is Prime");

    
    return 0;
}

#include<stdio.h>
int main(){
   
   int arr[7] = {1,2,3,4,5,6,7};
     int sum1=0, sum2=0;
    for(int i=0; i<7; i++){
        if(i%2==0) sum1 = sum1 + arr[i];
        else sum2 = sum2 + arr[i];
    }
    int sum = sum1-sum2;
    printf("The sum is %d",sum);

 return 0;
}
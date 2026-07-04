#include<stdio.h>
int main (){
int count = 0,n;
int arr[7] = {12,95,36,45,54,31,22};
printf("Enter a Number: ");
scanf("%d",&n);

for(int i=0; i<7; i++){
    if(arr[i]>n){
        count++;
    }
   
}
printf("%d\n",count);


    return 0;
}
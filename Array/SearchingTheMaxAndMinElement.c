#include<stdio.h>
int main(){
    int arr[7] = {13,4,2,8,19,71,12};
    int max = arr[0],min = arr[0];   //always put the first element int the max
    for(int i = 1; i<7; i++){
        if(max<arr[i]){
            max = arr[i];       //important algorithm of searching
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("The maximum element is %d and the minimum elemnt is %d",max,min);
    return 0;
}
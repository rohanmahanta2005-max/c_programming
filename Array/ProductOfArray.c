#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n],product = 1;
    for(int i=0; i<n; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        for(int i=0; i<n; i++){
        product = product*arr[i];

    }  
    printf("The product of given elements are %d",product);
    return 0;
}
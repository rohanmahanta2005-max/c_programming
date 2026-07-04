#include<stdio.h>
int main (){
int n;
printf("Enter a Number: ");
scanf("%d",&n);                         // Number of lines= Number of rows
                                         // number of stars in each line = Number of Columns


for(int i=1;i<=n;i++){
   
    for(int i=1;i<=n;i++){
     printf("%d",i);
    }
    printf("\n");
}
     



    return 0;
}
#include<stdio.h>
int main(){

 int marks[3][4]={45,65,45,33,55,22,41,60,40,30,55,22};
 int i,j;

 for(i=0;i<3;i++)                               // index number always starts from zero
 {
    for(j=0;j<4;j++)
    {
       printf(" %d",marks[i][j]);
    }
    printf("\n");
    
 }   

    return 0;
}
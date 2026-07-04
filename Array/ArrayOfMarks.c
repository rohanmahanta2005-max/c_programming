#include<stdio.h>
int main(){
    int marks[5];
    for(int i=0; i<5;i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    
    for( int i=0;i<5;i++){
        if(marks[i]<35){
            printf("Roll Numbers is %d\n ",i);
        }
    }
    return 0;

}
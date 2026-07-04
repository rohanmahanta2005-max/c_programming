# include <stdio.h>
int main (){
    float n;
    printf("Enter Percentage : ");
    scanf("%f",&n);
//   more than 80 ->A
//   more than 60 ->B
//   more than 40 ->C
//   less than 40 ->D
if(n>=80 && n<=100){
    printf("A grade");
}
 if(n>=60 && n<80){
    printf("B grade");
}
 if(n>=40 && n<60){
    printf("C grade");
}
else if(n<40){
    printf("You are Fail !");
}

    return 0;
}
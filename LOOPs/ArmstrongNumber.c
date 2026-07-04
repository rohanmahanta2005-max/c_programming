 #include<stdio.h>
 int main(){
  int n,arm=0,r;

printf("Enter any number:");
scanf("%d",&n);
 int c = n;
while(n>0){
    r = n%10;
    arm = arm + (r*r*r);
    n = n/10;

}
if(c == arm) printf("%d is a armstrong number.", c);
else printf("Not an armstrong number");




    return 0;
 }
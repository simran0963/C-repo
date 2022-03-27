#include<stdio.h>

int main(){
int a,b,c;
printf("Enter first number \n");
scanf("%d",&a); 
printf("Enter second number \n");
scanf("%d",&b);
printf("%u \n",&c);
c = a - b;
printf("%d",c);
return 0;
}
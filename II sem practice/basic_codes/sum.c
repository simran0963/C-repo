#include<stdio.h>

int main(){
	// a : int , b :int 
	int a;
	int b;
	int s;
	printf("Enter first number \n");
	// a = input()
	scanf("%d",&a);
	//	a -> value at 'a'
	//  &a -> address of 'a' 
	printf("\n Enter second number \n");
	scanf("%d",&b);
	s = a + b;
	// print(s)
	printf("%d",s);
	printf("\n");
	printf("%d",&s);
	return 0;
}

/* for printing the input as well as output in one line*/

main(){
	int a=2, b=5;
	printf("Sum of %d and %d is %d",a,b,a+b);
	return 0;
}
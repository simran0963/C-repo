//Find the roots of the quadratic equation
#include<stdio.h>
#include<math.h>
#define mac 100
int main()
{
	int a,b,c;
	float r1,r2,i1;
	printf("\nEnter the values of a,b and c if the equation is in the form: ax^2+bx+c=0 ");
	printf("\nEnter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	if((b*b-4*a*c)>0)
	{
		r1= (-(b)+sqrt(b*b-4*a*c))/(2*a);
		r2= (-(b)-sqrt(b*b-4*a*c))/(2*a);
		printf("\nThe roots are: %0.2f and %0.2f",r1,r2);
	}
	else if((b*b-4*a*c)==0)
	{
		r1=-b/(2*a);
		printf("\nThe roots are: %0.2f and %0.2f",r1,r1);
	}
	else if((b*b-4*a*c)<0)
	{
		r1=-b/(2*a);
		i1=((sqrt(4*a*c-b*b))/(2*a));
		printf("\nThe roots are: %0.2f + %0.2fi and %0.2f - %0.2fi",r1,i1,r1,i1);
	}
	return 0;
}
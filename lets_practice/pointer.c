#include<stdio.h>
#include<string.h>

int main()
{
	int a=10;
	int *p;
	p = &a;
	printf("\nAddress of a is : %u",&a); //%u is unsigned int format specifier
	printf("\nAddress of ptr is : %x",&p); //%x is unsigned hexadecimal for int
	printf("\nThe value in a is : %d",a);
	printf("\nValue in ptr is : %p",p);  //%p is for printing address for ptr and var
	printf("\nValue pointed by ptr is : %d",*p);
}
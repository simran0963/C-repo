#include<stdio.h>
#include<string.h>
#define SIZE 100
void fun(int n){
	n=20;

}

int main()
{
	int a=10;
	int *p;
	p = &a;
	printf("\n%u",&a); //prints address
	printf("\n%d",p);  //prints address
	printf("\n%d",*p);  //prints value on that address
	fun(a);
}
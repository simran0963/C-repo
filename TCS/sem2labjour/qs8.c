/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
void swap(int *ptr1,int *ptr2){
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}
int main(){
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("%d, %d",a,b);
	return 0;
}
/* Input: a=2
	      b=4
   Output: a=4
           b=2
*/
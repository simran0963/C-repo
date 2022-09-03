#include<stdio.h>

int main(){
	int x=3,y;
	y=x++;
	printf("%d %d",x,y);
	return 0;
}

// here y=x++ does not work because the priority of post increament is lower than the assignment operator, so firstly the y=x works and once the 
//asignment is complete then the x++ that is x=x+1 works.
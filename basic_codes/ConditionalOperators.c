#include<stdio.h>

int main(){
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	x>0 ? printf("positive") : printf("non positive");
	return 0;
	// if(x>0){
	// printf("Positive");
	// }
	// else{
	// print("Non positive");
	// }
}
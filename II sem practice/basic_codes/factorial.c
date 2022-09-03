#include<stdio.h>

int main(){
	int n;
	printf("Enter the number: \n");
	scanf("%d",&n);

	int fac(int n){
		if(n < 1){
			return 1;
		}
		return fac(n-1) * n;
	}
	printf("%d",fac(n));
}
#include<stdio.h>
#include<math.h>
int main(){
	int n, sum=0,c,rem;
	printf("Enter numbers: ");
	scanf("%d", &n);
	int k=n;
	while(k!=0){
		rem=k%10;
		c=pow(rem,3);
		sum=sum+c;
		k=k/10;
	}
	if(sum==n){
		printf("%d is Armstrong number", n);
	}
	else{
		printf("%d is not Armstrong number", n);
	}
	return 0;
}
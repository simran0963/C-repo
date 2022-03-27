#include<stdio.h>
#include<math.h>
int main(){
	int i;
	float j, result;
	printf("Enter the value of x: ");
	scanf("%f", &j);
	for(i=1;i<8;i++){
		if(i==1){
			result=(j-1)/j;
		}
		else{
			result= result+pow((j-1),i)/(2*j);
		}
	}
	printf("Sum of the series is %0.2f", result);
	return 0;
}
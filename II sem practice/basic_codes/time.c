#include<stdio.h>

int main(){
	int num, sec, min, hr;
	printf("Enter the number:");
	scanf("%d", &num);
	hr = num/360;
	min = (num - (hr*360))/60;
	sec = num%60;
	printf("%d:%d:%d", hr, min, sec);
	return 0;
}
#include<stdio.h>
/*
int main(){
	int rice, wheat, bajra, hold, quantity;
	printf("Enter the amount for a kilogram  of rice, wheat, bajra and the quantity of grain you wanna buy:\n");
	scanf("%d %d %d %d", &rice, &wheat, &bajra, &quantity);
	hold = rice<wheat?(rice<bajra?rice:bajra):(wheat<bajra?wheat:bajra);
	printf("The lowest amount needed to buy the highest quantity is \n%d", hold*quantity);
	return 0;
}
*/

int main(){
	int num, opr;
	printf("Enter a number");
	scanf("%d", &num);
	opr = num%10;
	opr /= 10;
	printf("%d", opr);
	return 0;
}
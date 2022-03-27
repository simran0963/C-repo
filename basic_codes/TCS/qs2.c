/*
Create a function to calculate CI(parameters are P,R,T)
*/
#include<stdio.h>
#include<math.h>
float CI(float P, float R, float T)
{
	float res;
	res = P*(pow((1+R/100), T))-P;
	return res; 
}

int main()
{
	float P, R, T;
	// float CI;
	printf("\nEnter the values of P, R, T using a space:\n");
	scanf("%f %f %f", &P, &R, &T);
	printf("CI = \n%f", CI(P, R, T));
	return 0;
} 		
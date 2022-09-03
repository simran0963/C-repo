/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
#define max 50
#include<string.h>
int equal(char str[max],char s[max]){
	int a;
	a = strcmp(str,s);
	if(a==0){
		return 1;
	}
	else
	return 0;
}
int main(){
	char str[max],s[max];
	int i, n;
	gets(str);
	gets(s);
	n = equal(s,str);
	if(n==1)
		printf("The strings are equal");
	else
		printf("The strings are not equal.");
	return 0;
}
/* Input: str = graphic era
          s = Graphic Era
   Output: "The strings are not equal"
*/
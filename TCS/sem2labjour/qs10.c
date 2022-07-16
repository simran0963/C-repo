/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
#include<string.h>
#define max 100
int main(){
	char str[max], f,*ptr=str;
	int n, i;
	gets(str);
	n = strlen(str);
	for(i=0;i<=(n-1)/2;i++){
		f = *(ptr + i);
		*(ptr + i) = *(ptr + n-i-1);
		*(ptr + n-i-1) = f;
	}
	puts(str);
}
/* Input: "graphic era"
   Output: "are cihparg"
*/
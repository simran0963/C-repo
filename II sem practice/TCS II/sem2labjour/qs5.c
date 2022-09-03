/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
#include<string.h>
#define max 50
int main(){
	char str1[max],str2[max];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	puts(str1);
	return 0;
}
/*Input: str1 = "Graphic E"
		 str2 = "ra Hill University"
  Outout: str1 = "Graphic Era Hill University"
*/
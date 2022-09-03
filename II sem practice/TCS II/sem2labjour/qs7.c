/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
#include<string.h>
#define max 500
int main(){
	int i, j, n, freq, k=0;
	char str1[max],str[max];
	gets(str1);
	for(i=0;i<n;i++){
		if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z'){
			str[k]=str1[i];
			k++;
		}
	}
	for(i=0;i<k;i++){
		freq=1;
		if(str[i]!=-1){
			for(j=i+1;j<k;j++){
				if(str[i]==str[j]){
					freq++;
					str[j]=-1;
				}
			}
			printf("The occurrence of %c is %d times\n",str[i],freq);
		}
	}
	return 0;
}
/* Input: graphic era
   Output: The occurrence of g is 1 times
		   The occurrence of r is 2 times
		   The occurrence of a is 2 times
		   The occurrence of p is 1 times
		   The occurrence of h is 1 times
		   The occurrence of i is 1 times
		   The occurrence of c is 1 times
		   The occurrence of e is 1 times
*/
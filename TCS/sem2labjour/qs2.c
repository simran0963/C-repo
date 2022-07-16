/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
int main(){
	int a[10]={1,3,5,7,9},b[5]={2,4,6,8},temp,i,j;
	for(i=0;i<4;i++){
		a[5+i]=b[i];
	}
	for(j=0;j<9;j++){
		for(j=i;j<9;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe resultant array is:\n");
	for(i=0;i<9;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
/*Input: a[]={1,3,5,7,9}
		 b[]={2,4,6,8}
  Output: {1,2,3,4,5,6,7,8,9}
*/
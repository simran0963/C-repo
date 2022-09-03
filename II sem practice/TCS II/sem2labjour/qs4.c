/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
int main(){
	int arr[50][50],i,j,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j){
				if(arr[i][j]!=0){
					count++;
				}
			}
		}
	}	
	if(count==0){
		printf("Upper Triangular.");
	}
	else
	printf("Not Upper Triangular.");
	return 0;
}
/*
Input: n=3
	   arr[][]={{1,4,7},{0,5,9},{0,0,9}}
Output: Upper Triangular
*/
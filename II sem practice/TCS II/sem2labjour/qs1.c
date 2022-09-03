/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
int main(){
	int a[100],n, i, j, k, la=0,sm=0,eq=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number k: ");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(k>a[i]){
			sm++;
		}
		else if(k<a[i]){
			la++;
		}
		else
		eq++;
	}
	printf("Greater than %d : %d\nSmaller than %d : %d\nEquals %d : %d",k,la,k,sm,k,eq);
	return 0;
}
/* Input : n = 10
		   a[] = {1,2,3,4,5,6,7,8,9,10}
		   k = 5
   Output: Greater than k : 5
		   Smaller than k : 4
		   Equals k : 1
*/
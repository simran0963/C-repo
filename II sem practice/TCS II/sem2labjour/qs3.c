/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
int main(){
	int n, arr[100][100],i, j;
	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The transpose matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
/*Input : n = 3
		  arr[][]={{1,2,3},{4,5,6},{7,8,9}}
  Output : arr[][]={{1,4,7},{2,5,8},{3,6,9}}
*/
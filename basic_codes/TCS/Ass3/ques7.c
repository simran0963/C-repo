#include<stdio.h>
int main()
{
	int i, j, k, n=1;
	printf("Enter rows: ");
	scanf("%d", &k);
	for(i=1;j<=k;i++){
		for(j=1;j<=k-i; j++){
			printf("  ");
		}
		for(j=1;j<=i;j++){
			printf("%d  ", n++);
		}
		printf("\n");
	}
	return 0;
}
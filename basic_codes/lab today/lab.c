#include<stdio.h>
int main(){
	int low, high, i, j;
	printf("Enter the number:");
	scanf("%d %d", &low, &high);
	for(i=low; i<high; i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
			if(j==i){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
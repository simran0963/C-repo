#include<stdio.h>

int main(){
	int day, mon=0, tues=0, wed=0, thur=0, fri=0, sat=0, sun=0, res=1, i;
	printf("\nEnter the days in 1 to 7 format taking 1 as Monday:\n");
	while(res<=7)
	{
		printf("Enter number of days: ");
		scanf("%d", &day);
		printf("Number of vaccinations: ");
		switch(day)
		{
			case 1: scanf("%d", &mon);
			break;
			case 2: scanf("%d", &tues);
			break;
			case 3: scanf("%d", &wed);
			break;
			case 4: scanf("%d", &thur);
			break;
			case 5: scanf("%d", &fri);
			break;
			case 6: scanf("%d", &sat);
			break;
			case 7: scanf("%d", &sun);
			break; 
		}
		res ++;
	}
	printf("Total vaccinations done: %d\n", mon+tues+wed+thur+fri+sat+sun);
	return 0;
}
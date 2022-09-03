/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
struct students{
	char name[30];
	int rollnum;
};
struct birth{
	int dob;
	char mob[10];
	int yob;
};
struct admission{
	int doa;
	char moa[10];
	int yoa;
};
int main()
{
	int n,i;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	struct students a[n];
	struct birth b[n];
	struct admission c[n];
	for(i=0;i<n;i++)
	{
		printf("\n\n\nStudent %d:\n",i+1);
		printf("Name: ");
		scanf("%s",&a[i].name);
		printf("Roll number: ");
		scanf("%d",&a[i].rollnum);
		printf("Birth Date : ");
		scanf("%d",&b[i].dob);
		printf("Birth Month: ");
		scanf("%s",&b[i].mob);
		printf("Birth Year: ");
		scanf("%d",&b[i].yob);
		printf("Admission date: ");
		scanf("%d",&c[i].doa);
		printf("Admission month: ");
		scanf("%s",&c[i].moa);
		printf("Admission year: ");
		scanf("%d",&c[i].yoa);
	}
	printf("\n\nThe details are:");
	for(i=0;i<n;i++)
	{
		printf("\n\n\nStudent %d:",i+1);
		printf("\nName : %s",a[i].name);
		printf("\nRoll number : %d",a[i].rollnum);
		printf("\nDate of Birth : %d %s,%d",b[i].dob,b[i].mob,b[i].yob);
		printf("\nDate of Admission : %d %s,%d",c[i].doa,c[i].moa,c[i].yoa);
	}
	return 0;
}
/* Input: n=2
   name[] = {"abc","xyz"}
   rollnum[] = {01,02}
   dob[] = {11,12}
   mob[] = {"March","May"}
   yob[] = {1999,1998}
   doa[] = {1,2}
   moa[] = {"April","May"}
   yoa[] = {2018,2017}

   Output: 
		   student1
		   Name : abc
   		   Roll number : 01
		   Dob : 11 March, 1999
		   Doa : 1 April,2018
		   student2
		   Name : xyz
   		   Roll number : 02
		   Dob : 12 May, 1998
		   Doa : 2 May,2017
*/
/* Read and print set of name, roll num, dob and date of admission of "n" students in the college where dob
and date of admission consists of three members such as day, month and year as a separate structure */
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
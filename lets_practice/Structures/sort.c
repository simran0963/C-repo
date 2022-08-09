#include<stdio.h>
#include<string.h>

struct students{
  char name[10];
  int stid;
  int enr;
  int marks[20];
float avg;
};
float average();


int main(){
	struct students A[10];
  int i,n,j;
  float avg=0.0, av[20];
  printf("Enter the number of students: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n\nEnter the name of student %d: ",i+1);
    scanf("%s",A[i].name);
    printf("Enter their student ID : ");
    scanf("%d",&A[i].stid);
    printf("Enter their enrollment number: ");
    scanf("%d",&A[i].enr);
    printf("Enter the marks: \n");
    for(j=0;j<5;j++)
    {
      printf("Marks in subject %d ",j+1);
      scanf("%d",&A[i].marks[j]);
      }
    }
  for(int j=0;j<n;j++)
    {
		avg=0.0;
      for(i=0;i<5;i++)
      {
        avg+=A[j].marks[i];
      }
	  av[j]=avg/5;
    }
    
    for(i=0;i<n;i++)
    {
      printf("\n\n\nName : %s",A[i].name);
      printf("\nStudent ID : %d",A[i].stid);
      printf("\nEnrollment Number : %d",A[i].enr);
      printf("\nAverage marks: %0.2f",av[i]);
    }
	for(i=0;i<n-1;i++)
	{
		int temp;
		char *Nmae;
		if(A[i].stid>A[i+1].stid)
		{
			temp=A[i].stid;
			A[i].stid=A[i+1].stid;
			A[i+1].stid=temp;
		}
	}
}
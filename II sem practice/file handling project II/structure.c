#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[50];
	int roll_num;
	char phone_num[12];
};
int main()
{
	int n,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	struct student S[n];
	FILE *ptr;
	ptr = fopen ("data.txt", "w");
    if (ptr == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",&S[i].name);
		fprintf(ptr, "\nName: %s,", S[i].name);
		fflush(stdin);
		scanf("%d",&S[i].roll_num);
		fprintf(ptr, "Roll Number: %d,", S[i].roll_num);
		scanf("%s",&S[i].phone_num);
		fprintf(ptr, "Phone number: %s", S[i].phone_num);
	}
    
    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
	
	char ch;
	fclose(ptr);
	ptr=fopen("data.txt","r");
	while ((ch=getc(ptr))!=EOF){
		if(ch == ',')
			printf("\t\t");
		else
			printf("%c",ch);
	}
	fclose(ptr);
    return 0;
}
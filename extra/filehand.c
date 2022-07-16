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
	char str[1000];
	printf("Enter the string");
	gets(str);
	FILE *ptr;
	ptr = fopen ("data.txt", "w");
    if (ptr == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }
	
	for(i=0;i<3;i++)
	{
		printf("Enter the para %d\n",i+1);
		gets(str);
		n = strlen(str);
		fprintf(ptr,"%c",str);
	}
    
    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");
	
	char ch;
	fclose(ptr);
	ptr=fopen("data.txt","r");
	while ((ch=getc(ptr))!=EOF){
		if(ch == '^')
			printf("\n\n");
		else
			printf("%c",ch);
	}
	fclose(ptr);
    return 0;
}
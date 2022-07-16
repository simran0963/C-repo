/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct paragraph
{
	char para[500];
};
void checker(FILE *ptr)
{
	char ch;
	int vow=0, con=0;
	while((ch=fgetc(ptr))!=EOF)
	{
		tolower(ch);
		if(ch>='a' && ch<='z')
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				vow++;
			}
			else
			con++;
		}
	}
	printf("Number of vowels : %d\nNumber of consonants : %d",vow,con);
}
void print(FILE *ptr)
{
	char ch;
	while((ch=fgetc(ptr)!=EOF))
	{
		printf("%c",ch);
	}
}
int main()
{
	struct paragraph pg[100];
	FILE *ptr;
	ptr = fopen("file.txt","w+");
	if(ptr==NULL)
	{
		printf("Error opening file\n");
		exit(0);
	}
	int i;
	for(i=0;i<3;i++)
	{
		gets(pg[i].para);
		fflush(stdin);
		fprintf(ptr,"%s\n",pg[i].para);
	}
	rewind(ptr);
	printf("\nContent in file: \n");
	rewind(ptr);
	checker(ptr);
	print(ptr);
	fclose(ptr);
	return 0;
}
/* Input: para 1 : qwertyuiop[]
		  para 2 : asdfghjkl;'
		  para 3 : zxcvbnm,./
   Output: Vowels : 5
		   Consonants : 21
*/
#include<stdio.h>
#include<stdlib.h>
#define mac 50
int main()
{
	char str[mac],ch;
	FILE *ptr;
	FILE *fp;
	ptr = fopen("file.txt","w+");
	fp = fopen("file2.txt","w+");	
	gets(str);
	fprintf(ptr,"%s",str);
	if(ptr==NULL)
	{
		printf("Error opening file!");
		exit(0);
	}
	while((ch=fgetc(ptr))!=EOF)
	{
		printf("%c",ch);
	}
	rewind(ptr);
	while((ch=fgetc(ptr))!=EOF)
	{
		ch=fscanf(fp,"%c ",ch);
		// ch=fputc(ch,fp);
	}
	fclose(ptr);	
}
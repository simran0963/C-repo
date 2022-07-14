/* Create a file with 3 paragraphs. Display the contents and count the number of vowels and consonants in the 
file .Display the count as standard output */
#include<stdio.h>
int main()
{
	int cnt=0,i;
	char str[1000];
	FILE *fptr = fopen("file.txt", "w+");
	printf("Enter the paragraphs, '^' should indicate the end of a paragraph\n"); 
	while(str[i]!='\0')
	{
		gets(str);
		fprintf(fptr,"%s",str);
		if(str[i]=='^')
		{
			cnt++;
		}
		
		if(cnt==3)
		{
			break;
		}

	}
	// while(!EOF)
	// {
	// 	fprintf(fptr,"%c",str);
	// }
	char ch;
	int vowel=0, cons=0;
	while((ch = getc(fptr))!=EOF)
	{
		if(ch != '^'){
			printf("%c",ch);
			if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
				if(ch=='A' || ch=='a'|| ch=='E'|| ch=='e'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='U'||ch=='u')
				{
					vowel++;
				}
				else
				cons++;
			}
		}
		else
			printf("\n\n");
	}
	printf("\nThe vowel count is: %d",vowel);
	printf("\nThe consonant count is: %d",cons);
	fclose(fptr);
	return 0;
}
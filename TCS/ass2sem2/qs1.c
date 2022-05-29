/*Write a functionn that takes a single string as its argument and returns a pointer to the first 'blank space'
character in the string. Implement a C program to accept the string in the main program*/
#include<stdio.h>
#include<string.h>
#define mac 100
void fun(char a[mac])
{
	int n,i=0;
	char *ptr[n];
	ptr[n]=&a[n];
while(a[i]!='\0');
{
	n++;
	i++;
}	
for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			printf("The pointer now points to the first blank space: %c",a[i]);
		}
	}
}
int main()
{
	char str[mac];
	printf("Enter the string: ");
	scanf("%[^\n]s",&str);
	fun(str);
}

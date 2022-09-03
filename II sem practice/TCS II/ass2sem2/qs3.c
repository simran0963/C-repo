//length of the string
#include<stdio.h>
#define mac 100
int main()
{
	int i,count=0;
	char str[mac];
	char *ptr;
	ptr=&str;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	i=0;
	while(*(ptr+i)!='\0')
	{
		count++;
		++i;
	}
	printf("Length of the entered string is: %d",count);
	return 0;
}
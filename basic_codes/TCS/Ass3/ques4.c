#include<stdio.h>
#include<ctype.h>
int main()
{
	int A=0, E=0, I=0, O=0, U=0;
	char input = 'c';
	while(input!='_')
	{
		input = getchar();
		switch(toupper(input))
		{
			case 'A': A++;
			break;
			case 'E': E++;
			break;
			case 'I': I++;
			break;
			case 'O': O++;
			break;
			case 'U': U++;
			break;
		}
	}
	printf("A= %d, E=%d, I=%d, O=%d, U=%d\n", A, E, I, O, U);
	return 0;
}
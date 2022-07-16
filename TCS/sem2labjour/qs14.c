/*Name : Simran Mehta
Section : R
Roll Number : 65*/
#include<stdio.h>
int main(){
	char s[500],c;
	gets(s);
	FILE *fp1 = fopen("file1.txt","w+");
	FILE *fp2 = fopen("file2.txt","w+");
	fprintf(fp1,"%s",s);
	rewind(fp1);
	while((c=fgetc(fp1))!=EOF){
		if(c!=' '){
			fputc(c,fp2);
		}
	}
	fclose(fp1);
	rewind(fp2);
	while((c=fgetc(fp2))!=EOF){
		printf("%c",c);
	}
	fclose(fp2);
	return 0;
}
/* Input : Graphic Era Hill University
   Output : GraphicEraHillUnivrsity
*/
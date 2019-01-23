#include <stdio.h>
void cat(char *s,char *t)
 {
 	int i,j;
 	i=0;
 	while(s[i]!='\0'){
 		i++;
	 }
	 j=0;
	 while(t[j]!='\0'){
	 	s[i+j]=t[j];
		 j++;
	 }
	 s[i+j]='\0';
 	
 }
int main()
{
	char s[80]="(",t[80];
	gets(t);
	cat(s,t);
	cat(s,")");
	puts(s);
	return 0;
 } 


#include<stdio.h>
#include<ctype.h>

char*mystrupper(char*str)
{
	int i;
	
	for(i=0;str[i]!='\0';i++)
	  str[i]=toupper(str[i]);
	  
	
	
	return str;
}
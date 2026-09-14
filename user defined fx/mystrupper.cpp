#include<stdio.h>
#include<ctype.h>

char*mystrlower(char*str)
{
	int i;
	
	for(i=0;str[i]!='\0';i++)
	  str[i]=tolower(str[i]);
	  	
	return str;
}
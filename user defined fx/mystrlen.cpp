#include<stdio.h>
#include<ctype.h>

int mystrcmp (const char*str)
{
    int count=0;
    
	while(str[count]!='\0')
	   count++;
		
	return count;
}
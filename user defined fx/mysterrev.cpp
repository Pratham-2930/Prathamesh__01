#include<stdio.h>
#include<ctype.h>

char*mystrncasecmp(const char*s1,const char*s2,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		char c1=tolower((unsigned char)s1[i]);
		char c2=tolower((unsigned char)s2[i]);
		
		if(c1!=c2)
		   return c1-c2;
		   
		if (s1[i]=='\0'||s2[i]=='\0')
		    return 0;
	}
	
	return 0;
}
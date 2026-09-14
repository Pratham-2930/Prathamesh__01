#include<stdio.h>
#include<ctype.h>

char*mystrncmp(const char*str,int ch)
{
   const char*last = NULL;
   
   while(*str)
   {
   	if(*str==ch)
   	   last=str;
   	   
   	str++;
   }
   
   if(ch=='\0')
      return(char*)str;
      
    return(char*)last;
}

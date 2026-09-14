#include<stdio.h>

void checkCase(char*ch)
{
	if(*ch>='A'&& *ch<='Z')
	   printf("%c is Uppercase",*ch);
	else if(*ch>='a'&&*ch<='z')
	   printf("%c is Lowercase",*ch);
	else
	   printf("%c is not an alphabet",*ch);
}

int main()
{
	char ch;
	
	printf("Enter a character:");
	scanf("%c",&ch);
	
	checkCase(&ch);
	
	return 0;
}
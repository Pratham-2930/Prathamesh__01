#include<stdio.h>

void checkAge(int *age)
{
	if(*age<12)
	   printf("Child\n");
	   
	else if(*age<=19)
	   printf("Teenager\n");
	   
	else if(*age<=59)
	   printf("Adult\n");
	   
	else
	   printf ("Senior\n");
} 

int main()
{
	int age;
	
	printf("Enter age:");
	scanf("%d",&age);
	
	checkAge(&age);
	
	return 0;
}
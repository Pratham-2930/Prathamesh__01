#include<stdio.h>

void checkResult(int *marks)
{
	if(*marks>75)
	   printf("Distinction\n");
	
	else if(*marks>65)
	   printf("First Class\n");
	   
	else if(*marks>55)
	   printf("Second class\n");
	   
	else if(*marks>=40)
	   printf("Pass Class\n");
	   
	else
	   printf("Fail\n");
}

int main()
{
	int marks;
	
	printf("Enter marks:");
	scanf("%d",&marks);
	
	checkResult(&marks);
	
	return 0;
}
#include<stdio.h>

void checkVotingEligibility(int*age)
{
	if(*age>=18)
	   printf("Person is eligible to vote");
	else
	   printf("Person is not eligible to vote");
}

int main()
{
	int age;
	
	printf("Enter age:");
	scanf("%d",&age);
	
	checkVotingEligibility(&age);
	
	return 0;
}
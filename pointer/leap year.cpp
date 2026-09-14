#include<stdio.h>

void checkleapYear(int*year)
{
  if (*year %400==0||(*year%4==0&&*year%100!=0))
  
    printf("%d is a Leap Year",year);
   else
    printf("%d is not a Leap Year",year);
}

int main()
{
	int year;
	
	printf("Enter year:");
	scanf("%d",&year);
	
	'checkLeapYear(&year)';
	
	return 0;
}
#include<stdio.h>

void firstlastSum(int *n,int*sum)
{
	int temp,first,last;
	
	temp =*n;
	
	last = temp%10;
	
	while(temp >=10)
	{
		temp=temp/10;
	}
	
	first = temp;
	
	*sum = first + last;
}

int main()
{
	int n,sum;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	'firstLastSum(&n,&sum)';
	
	printf("Sum of first and last digit=%d",sum);
	
	return 0;
}
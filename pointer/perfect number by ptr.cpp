#include<stdio.h>

void factorial(int *n,int *fact)
{
	int i;
	
	*fact =1;
	
	for(i=1;i<=*n;i++)
	{
		*fact =*fact *i;
	}
}

int main()
{
	int n,fact;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	factorial(&n,&fact);
	
	printf("Factorial =%d",fact);
	
	return 0;
}
#include<stdio.h>

void printNumbers(int *n)
{
	int i;
	for(i =1;i<= *n; i++)
	{
		printf("%d",i);
	}
}

int main()
{
	int n = 10;
	
	printNumbers(&n);
	
	return 0;
}
#include<stdio.h>

void checkPrime(int *n,int*result)
{
	int i,count = 0;
	
	for(i=1;i<=*n;i++)
	{
		if(*n% i == 0)
		{
			count++;
		}
	}
	
	int main()
{
		int n,result;
		
		printf("Enter number:");
		scanf("%d",&n);
		
		checkPrime(&n,&result);
		
		if(result ==1)
		   printf("Prime");
		else
		   printf("Not Prime");
		   
		return 0;	
}
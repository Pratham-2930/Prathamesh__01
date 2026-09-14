#include<stdio.h>

void checkPerfect(int *n,int *result)
{
	int i,sum = 0;
	
	for(i=1;i<*n;i++)
	{
		if(*n% i==0)
		{
			sum = sum+i;
		}
	}
	
	if (sum ==*n)
	    *result =1;
	else
	   *result =0; 
}

int main()
{
	int n,result;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	checkPerfect(&n,&result);
	
	if(result ==1)
	   printf("Perfect");
	else
	   printf("Not perfect");
	
	return 0;
}
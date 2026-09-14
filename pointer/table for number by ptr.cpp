#include<stdio.h>

void sumRange(int *start,int *end,int *sum)
{
	int i;
	
	*sum=0;
	
	for(i= *start;i<=*end;i++)
	{
		*sum =*sum + i;
	}
}

int main()
{
	int start,end,sum;
	
	printf("Enter start and end:");
	scanf("%d%d",&start,&end);
	
	sumRange(&start,&end,&sum);
	
	printf("Sum =%d",sum);
	
	return 0;
}
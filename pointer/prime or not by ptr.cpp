#include<stdio.h>

void checkArmstrong(int *n,int *result)
{
	int temp,digit,sum=0;
	
	temp =*n;
	
	while(temp>0)
	{
		digit=temp% 10;
		sum=sum+(digit*digit*digit);
		temp = temp/10;
	}
	
	if(sum == *n)
	   *result=1;
	else
	   *result=0;
}

int main()
{
	int n,result;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	checkArmstrong(&n,&result);
	
	if(result ==1)
	   printf("Armstrong");
	else
	   printf("Not Armstrong");
	   
	return 0;
}
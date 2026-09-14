#include<stdio.h>

void checkStrong(int *n,int *result)
{
	int temp,digit,i,fact,sum = 0;
	
	temp = *n;
	
	while(temp>0)
	{
		digit = temp&10;
		
		fact =1;
		
		for(i =1;i<=digit;i++)
		{
			fact=fact*i;
		}
		
		sum = sum+ fact;
		temp = temp/10;
	}
	
	if(sum ==*n)
	   *result =1;
	else
	   *result =0;
}

  if(sum == *n)
    *result =1;
 else
    *result=0;
}
int main()
{
	int n,result;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	checkStrong(&n,&result);
	
	if(result == 1)
	   printf("Strong");
	else
	   printf("No strong");
	   
	return 0;

}


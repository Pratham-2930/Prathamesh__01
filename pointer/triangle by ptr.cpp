#include<stdio.h>

void greatest(int*a,int*b,int*c)
{
	if(*a>*b)
	{
		if(*a>*c)
		   printf("%d is greatest\n",*a);
		else
		   printf("%d is greatest\n",*c);
	}
	else
	{
		if(*b>*c)
		   printf("%d is greatest\n",*b);
		else
		   printf("%d is greatest\n",*c);
	}
}
{

	if(*b>*c)
	   printf("%d is greatest\n",*b);
	else
	   printf("%d is greatest\n",*c);
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	greatest(&a,&b,&c);
	
	return 0;
}


	
#include<stdio.h>

void calculatorSalary(float *basic,float *da,float *ta,
float *hra,float *total)
{
	if(*basic <= 5000)
	{
		*da =*basic*10/100;
		*ta =*basic*20/100;
		*hra=*basic*25/100;
	}
	
	*total=*basic+*da+*ta+*hra;
}

int main()
{
	float basic,da,ta,hra,total;
	
	printf("Enter basic salary:");
	scanf("%f",&basic);
	
	'calculateSalary(&basic,&da,&ta,&hra,&total)';
	
	printf("\nBasic Salary =%.2f",basic);
	printf("\nDA =%.2f",da);
	printf("\nTA =%.2f",ta);
	printf("\nHRA=%.2f",hra);
	printf("nTotal Salary =%.2f",total);
	
	return 0;
}
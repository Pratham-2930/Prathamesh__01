#include<stdio.h>

void areaCircle(float *radius,float*area)
{
	*area=3.14 *(*radius)*(*radius);
}

int main()
{
	float radius=5,area;
	
	areaCircle(&radius,&area);
	
	printf("Area of Circle=%.2f",area);
	
	return 0;
}
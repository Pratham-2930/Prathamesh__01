#include<stdio.h>

void celsiusFahrenheit(float *c,float*f)
{
	*f=(*c*9/5)+32;
}

int main()
{
	float celsius=25,fahrenheit;
	
	celsiusToFahrenheit(&celsius,&fahrenheit);
	
	printf("Celsius=%.2f\n",celsius);
	printf("Fahrenheit=%.2f",fahrenheit);
	
	return 0;
}
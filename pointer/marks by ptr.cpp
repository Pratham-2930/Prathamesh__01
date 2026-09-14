#include<stdio.h>

void calculateDiscount(float* price,char *student,float *discount,float *finalPrice)
{
	if(*student =='y'||*student =='Y')
	{
		if(*price>500)
		   *discount =*price *20/100;
		else
		   *discount=0;
	}
	
	*finalPrice = *price - *discount;
}

int main()
{
	float price,discount,finalPrice;
	char student;
	
	printf("Enter price:");
	scanf("%f",&price);
	
	printf("Are you a student?(y/n:)");
	scanf("%c",&student);
	
	calculateDiscount(&price,&student,&discount,&finalPrice);
	
	printf("Discount=%.2f\n",discount);
	printf("Final Price =%.2f\n",finalPrice);
	
	return 0;
}
	
	

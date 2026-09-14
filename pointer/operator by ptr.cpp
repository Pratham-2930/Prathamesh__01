#include<stdio.h>

void triangleType(int *a,int *b,int *c)
{
	if(*a == *b && *b == *c)
	   printf("Equilateral Triangle\n");
	   
	 else if(*a ==*b || *b == *c) 
	   printf("Isosceles Triangle\n");
	   
	else
	   printf("Scalene Triangle\n");
}

int main()
{
	int a,b,c;
	
	printf("Enter three sides:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<=0|| b<=0|| c<=0 ||
	   a + b <= c|| a + c<=b|| b + c<= a)
	{
		printf("Invalid triangle\n");
	}
	else
	{
		triangleType(&a,&b,&c);
	}
	
	return 0;
}
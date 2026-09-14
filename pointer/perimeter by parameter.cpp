#include<stdio.h>

void perimeter(int *length,int *width,int *result)
{
	*result = 2*(*length+*width);
}

int main()
{
	int length=10,width=5;
	int result;
	
	perimeter(&length,&width,&result);
	
	printf("Length=%d\n",length);
	printf("Width=%d\n",width);
	printf("Perimeter=%d",result);
	
	return 0;
}
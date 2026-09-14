#include<stdio.h>

void squareCube(int*n,int*square,int*cube)
{
	*square=(*n)*(*n);
	*cube=(*n)*(*n)*(*n);
}

int main()
{
	int no=5;
	int square,cube;
	
	squareCube(&no,&square,&cube);
	
	printf("Number=%d\n",no);
	printf("Square=%d\n",square);
	printf("Cube=%d",cube);
	
	return 0;
}
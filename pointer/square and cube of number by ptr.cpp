#include<stdio.h>

void convertMinutes(int*minutes,int*hours,int*remaining)
{
	*hours=*minutes/60;
	*remaining=*minutes%60;
}

int main()
{
	int minutes = 150;
	int hours,remaining;
	
	convertMinutes(&minutes,&hours,&remaining);
	
	printf("Total Minutes=%d\n",minutes);
	printf("Hours=%d\n",hours);
	printf("Remaining Minutes=%d",remaining);
	
	return 0;
}
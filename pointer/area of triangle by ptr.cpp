#include<stdio.h>

void calculateMarks(int *m1,int *m2,int *m3,int *m4,
int*m5,
          int*total,float*percentage)
{
	*total =*m1+*m2+*m3+*m4+*m5;
	*percentage=(*total/500.0*100);
}

int main()
{
	int m1=80,m2=75,m3=90,m4=85,m5=70;
	int total;
	float percentage;
	
	calculateMarks(&m1,&m2,&m3,&m4,&m5,&total,&percentage);
	
	printf("Subject 1=%d\n",m1);
	printf("Subject 2=%d\n",m2);
	printf("Subject 3=%d\n",m3);
	printf("Subject 4=%d\n",m4);
	printf("Total Mark%d\n",total);
	printf("Percentage=%2f%%",percentage);
	
	return 0;
}

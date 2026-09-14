#include<stdio.h>

void checkPalindrome(int *n)
{
	int temp,rev=0,rem;
	
	temp =*n;
	
	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	
	if(*n== rev)
	   printf("%d is Palindrome",*n);
	else
	   printf("%d is notna Palindrome",*n);
}

int main()
{
	int n;
	printf("Enter a3 digit number:");
	scanf("%d",&n);
	
	if(n>=100&&n<=999)
	   checkPalindrome(&n);
	else
	   printf("Please enter a 3digit number:");
	   
	return 0;
}
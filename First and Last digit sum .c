#include<stdio.h>
main()
{
	int n,sum=0, firstDigit, lastdigit;
	
	printf("Enter number to find sum of first and last digit =");
	scanf("%d",&n);
	
	lastDigit =n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstDigit=n;
	sum=firstDigit + lastDigit;
	
	printf("Sim of first and last digit=%d",sum);
}

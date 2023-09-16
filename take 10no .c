#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,sm;
	
	printf("Enter 10 numbers\n");
	while(i<=10)
	{
		scanf("%d",n);
		if(i==1)
		{
			sm=n;
		}
		else if (n<sm)
		{
			sm=n;
		}
		i=i+1;
	}
	printf("Smallest Number = %d",sm);
}

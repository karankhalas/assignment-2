#include<stdio.h>
main()
{
	int i, start,end,sum=0;
	
	printf("Enter lower limit:");
	scanf("%d",&start);
	printf("Enter upper limit:");
	scanf("%d",&end);
	
	if(start%2!=0)
	{
		start++;
	}
	for(i=start;i<=end;i+=2)
	{
		sum+=i;
	}
	printf("Sum of all even number between %d to %d=%d",start,end,sum);
}

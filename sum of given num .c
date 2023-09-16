#include<stdio.h>
main()
{
	int num =109347;
	int sum=0;
	while (num !=0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("%d",sum);
}

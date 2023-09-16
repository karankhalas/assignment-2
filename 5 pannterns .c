#include<stdio.h>
main()
{
	int rows=5;
	for(int i=1;i<=rows;i++)
	{
		for(int j=0;j<rows-i;j++)
		{
			printf(" ");
		}
		int c=1;
		for(intk=1;k<=i;k++)
		{
			printf("%d",c);
			c=c*(i-k)/k;
		}
		printf("\n");
	}
}

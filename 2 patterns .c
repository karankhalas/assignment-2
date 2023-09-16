#include<stdio.h>
main()
{
	int rows=5;
	
	for(into=0;i<rows;i++)
	{
		for(int j=0;j<2*(rows-i)-i;j++)
		{printf("");
		}
		for(int k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

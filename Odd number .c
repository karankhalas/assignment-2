#include<stdio.h>
main()
{
	int counter;
	printf("Odd numbers between 1 to 100\n");
	
	counter = 1;
	while (counter <= 100)
	{
		printf("%d",counter);
		counter=counter+2;
	}
}

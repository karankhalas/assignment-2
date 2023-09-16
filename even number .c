#include<stdio.h>
main()
{
	int i,n;
	printf("Print all evrn number till:");
	scanf("%d",&n);
	
	printf("All even numbers from 1 to %d are:\n",n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d\n",i);
	}
}

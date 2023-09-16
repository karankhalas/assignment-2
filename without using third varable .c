// Two number without using third variable

#include<stdio.h>
main()
{
	int x,y;
	printf("Input Value for x & y:\n");
	scanf("%d%d",&x,&y);
	printf("Before Swapping the value of x & y: %d%d",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("\n After swapping the value of x&y:%d %d",x,y);
	

}

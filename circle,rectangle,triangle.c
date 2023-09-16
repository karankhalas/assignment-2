#include<stdio.h>
int main()
{
	int length,breadth,area;
	float redius, area;
	float base,height,area;
	printf("\n Enter the redius of circle:");
	scanf("%d",&radius);
	
	area=3.14*redius*redius;
	printf("\n area of circle :f%,area");
	
	printf("\nEnter the length of rectangle:");
	scanf("%d",&length);
	printf("\nEnter the breadth of rectangle:");
	scanf("%d,&breadth");
	area=length*breadth;
	printf("\nArea of Rectangle:%d",area);
	
	printf("Enter base of triangle:");
	scanf("%f",&base);
	printf("enter height of the triangle:");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("AOT:%f\n",area);
	
}

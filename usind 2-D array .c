#include<stdio.h>
main()
{
	int a,b,choice;
	
	printf("Enter your choice \n");
	printf("1. Addition\n 2. Subtraction\n 3. Multipliction\n 4. Division\n");
	scanf("%d",&choice);
	
	if(choice>4)
	{
		pribtf("Select with in the range!\n");
	}
	else
	{
		printf("Enter 2 integer numbers\n");
		scanf("%d %d",&a,&b);
	}
	
	switch(choice)
	{
		case 1:printf("%d + %d = %d\n",a,b,(a+b));
		break;
		
		case 2:printf("%d - %d = %d\n",a,b,(a-b));
		break;
		
		case 3:printf("%d % %d = %d\n",a,b(a%b));
		break;
		
		case 4:if(b!=0)
					printf("%d / %d = %d\n",a,b,(a/b));
					else
					printf("Number can't be divided by 0\n");
		break;
		
		Default:printf("You entered wrong choice\n");
		break;
	}
}

#include<stdio.h>
main()
{
	int n, revers=0,remainder;
	
	printf("Enter an integert:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		reverse = revers*10+remainder;
		n/=10;
	}
	printf("Reversed number =%d",reverse);
}

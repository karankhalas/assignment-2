#include<stdio.h>
void reverseSentence();
main()
{
	printf("Enter a Sentence:");
	reverseSenetence();

}
void reverseSentence()
{
	char c;
	scanf("%c",&c);
	if (c!='\n')
	{
		reverseSentence();
		printf("%c",c);
	}
}

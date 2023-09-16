#include <iostream>
using namespace std;
main()
{
	char s[100];
	int i;\
	cout<<"\n Enter a string:";
	cin>> s;
	
	for(i=0;s[i]!='\0';++i);
	cout<<"\nLength of string:"<<i;
	cout<<endl;
}

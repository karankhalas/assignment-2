#include<iostream>
using namespace std;

unsigned int factorial (unsigned int n)
{
	if (n==0 || n==1)
	return 1;
	return n * factorial (n-1);
}
main()
{
	int num =5;
	cout<<"Factorial of"<<num<<"is"<<factorial(num)<<endl;
}

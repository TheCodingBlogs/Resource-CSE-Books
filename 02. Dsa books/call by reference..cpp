//write a program to swap two values usig call by value
#include<iostream>
using namespace std;
void swap(int &a,int &b)//call by reference
{

	int c;
	c=a;
	a=b;
	b=c;
	cout<<"Formal Arguments: A="<<a<<"; B="<<b<<endl;
	
}
main()
{
	int a,b;
	cout<<"Enter two value: ";
	cin>>a>>b;
	swap(a,b);
	cout<<"Actual Arguments: A="<<a<<"; B="<<b<<endl;
}

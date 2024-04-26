//:Write a program to swap two numbers.
#include<iostream>
using namespace std;

int main()
{
	int temp,a,b;
	cout<<"enter a two no"<<endl;
	cin>>a>>b;
	cout<<"before swap a="<<a<<"  b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap a= "<<a<<"  b="<<b<<endl;
	return 0;
	
}

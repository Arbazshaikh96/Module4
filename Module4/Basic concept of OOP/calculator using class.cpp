#include<iostream>
using namespace std;
class calculator{
	int n1, n2;
	public:
		void get()
		{
			cout<<"enter values: ";
			cin>>n1>>n2;
		}
		void addition()
		{
			cout<<"The Addition of value is "<<n1+n2;
		}
		void substriction()
		{
			cout<<"The Substriction of value is "<<n1-n2;
		}
		void multiplication()
		{
			cout<<"The Multiplication of value is "<<n1*n2;
		}
		void division()
		{
			cout<<"The Division of value is "<<n1/n2;
		}
}; 
	
int main()
{
	calculator cl;
	int ch;
	cl.get();
	cout<<"Enter choice"<<ch;
	cin>>ch;
	
	switch(ch)
	{
		case 1: cl.addition();
		break;
		case 2: cl.division();
		break;
		case 3: cl.multiplication();
		break;
		case 4: cl.substriction();
		break;
		
		default: cout<<"invalid choice";
		}	
	
	
	return 0;
}

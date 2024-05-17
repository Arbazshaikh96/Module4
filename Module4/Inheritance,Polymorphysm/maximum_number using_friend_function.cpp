//Write a program to find the max number from given two numbers 
//using friend function 
#include<iostream>
using namespace std;

class a; 

class b
{
	int number;
	public :
		b(int x)
		{
			number = x;
		}
		void friend greatest(a a1, b b1);
		
};
class a 
{
	int number;
	public :
		a(int x)
		{
			number = x;
			}
			void friend greatest(a a1, b b1);	
};

void greatest(a a1, b b1)
{
	if(a1.number>b1.number)
	{
		cout<< "\nNumber in class A is greatest i.e."<<a1.number;
	}
	else if(a1.number<b1.number)
	{
		cout<< "\nNumber in class B is greatest i.e."<<b1.number;
	}
	else
	{
		cout<< "\nNumber in both classes are equal";
	}
}

int main()
{
	cout<<"\n\n Program to find greatest of two numbers in two different classes using friend function";
	cout<<"\n-----------------------------------------------------------------------------------------";
	int num;
	
	cout<<"\n\n Enter number for class A - ";
	cin>>num;
	a a1(num);
	
	cout<<"\n Enter number for class B - ";
	cin>>num;
	b b1(num);
	
	greatest(a1,b1);
	cout<<"\n";
	
	
	return 0;
	
}



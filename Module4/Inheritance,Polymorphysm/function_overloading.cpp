//polymorphism = many forms
#include<iostream>
using namespace std;
class calculator{
	int no1,no2,ans;
	public:
		
		void operation()
		{
			cout<<"enter 2 values";
			cin>>no1>>no2;
			ans=no1+no2;
			cout<<"addition of 2 values are "<<ans;
		}
		void operation(int n1,int n2)
		{
			ans=n1-n2;
			cout<<"subtraction of 2 values are "<<ans;
		}
		void operation(double n1,double n2)
		{
			ans=n1*n2;
			cout<<"multiplication of 2 values are "<<ans;
		}
		void operation(double n1)
		{
			double n2;
			cout<<"enter second value for division";
			cin>>n2;
			if(n2==0)
			{
				cout<<"can't divide by zero";
			}
			else{
				ans=n1/n2;
				cout<<"division of 2 values are "<<ans;
			}
		}
		void operation(int n1)
		{
			int n2;
			cout<<"enter 2nd number for modulo";
			cin>>n2;
			ans=n1%n2;
			cout<<"modulo is "<<ans;
		}
};
int main()
{
	int choice;
	double n1,n2;
	int no1,no2;
	cout<<"enter 1 for + 2 for - 3 for * 4 for / 5 for %";
	cin>>choice;
	calculator obj;
	switch(choice)
	{
		case 1:
			obj.operation();
			break;
		case 2:
			cout<<"enter 2 values for subtraction";
			cin>>no1>>no2;
			obj.operation(no1,no2);
			break;
		case 3:
			cout<<"enter 2 values for multiplication";
			cin>>n1>>n2;
			obj.operation(n1,n2);
			break;
		case 4:
			cout<<"enter 1st value for division";
			cin>>n1;
			obj.operation(n1);
			break;
		case 5:
			cout<<"enter 1st value for modulo";
			cin>>no1;
			obj.operation(no1);
			break;
			default:
				cout<<"invalid choice";
		
	}
	
	
	return 0;
}

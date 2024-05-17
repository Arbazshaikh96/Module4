//Write a program of Addition, Subtraction, Division, Multiplication using 
//constructor.
#include<iostream>
using namespace std;
class calculate{
int no1, no2, addition, sub, multi;
float division;
	addition()
	{
		cout<<"enter number1 and number2";
		cin>>no1>>no2;
	}
	void display()
	{
		cout<<"number1 is: "<<no1<<"number2 is: "<<no2;
		cout<<"addition is: "<<no1+no2;
	}
	sub()
	{
		cout<<"enter number1 and number2";
		cin>>no1>>no2
	}
	void display()
	{
		cout<<"number1 is: "<<no1<<"number2 is: "<<no2;
		cout<<"subtraction is: "<<no1-no2;
	}
	multi(double 1, double 2)
	{
		cout<<"enter number1 and number2";
		cin>>n1>>n2
	}
	void display()
	{
		cout<<"number1 is: "<<no1<<"number2 is: "<<no2;
		cout<<"multiplication is: "<<no1*no2;
	}
	division()
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
};


int main()
{
	int choice;
	double n1,n2;
	int no1,no2;
	cout<<"enter 1 for + 2 for - 3 for * 4 for /";
	cin>>choice;
	calculate obj;
	switch(choice)
	{
		case 1:
			obj.addition();
			break;
		case 2:
			cout<<"enter 2 values for subtraction: ";
			cin>>no1>>no2;
			obj.sub(no1,no2);
			break;
		case 3:
			cout<<"enter 2 values for multiplication: ";
			cin>>no1>>no2;
			obj.multi(no1,no2);
			break;
		case 4: 
			cout<<"enter 2 values for division: ";
			cin>>n1;
			obj.division(n1);
			break;
			default:
				{
					cout<<"invalid choice";
				}
			
			
	}
	
	return 0;
}

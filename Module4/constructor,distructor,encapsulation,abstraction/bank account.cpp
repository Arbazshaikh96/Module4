//Define a class to represent a bank account.include the member.
#include<iostream>
using namespace std;
class bank{
	string name;
	int ac_no;
	float balance,dp_amt,wt_amt;
	public:
		void get()
		{
			cout<<"enter name of account holder";
			cin>>name;
			cout<<"enter type of account";
			cin>>type_ac;
			cout<<"enter account number";
			cin>>ac_no;
			cout<<"enter total balance";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"enter amount to deposit";
			cin>>dp_amt;
			balance=balance+dp_amt;
		}
		void withdraw()
		{
			cout<<"\nenter amount to withdraw";
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"\ninsufficient balance";
			}
			else{
				balance=balance-wt_amt;
			}
		}
		void display()
		{
			cout<<"\nname of account holder is: "<<name;
			cout<<"\n total current balance is: "<<balance;
		}
};



int main()
{
	bank obj;
	obj.get();
	int choice;
	cout<<"press 1 for deposit";
	cout<<"\n press 2 for withdraw";
	cout<<"\n enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.deposit();
			break;
		case 2:
			obj.withdraw();
			break;
		default:
			cout<<"\n invalid choice";
			break;
	}
	obj.display()
	return 0;
}

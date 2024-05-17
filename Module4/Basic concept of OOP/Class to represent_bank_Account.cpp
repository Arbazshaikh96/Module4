#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank
{
	int ac_no;
	char nm[100], acctype[100];
	float balance;
	public:
		bank(int acc_no, char *name, char *acc_type, float balance)
		{
			ac_no = acc_no;
			strcpy(nm, name);
			strcpy(acctype, acctype);
			balance = balance;
		}
		void deposit();
		void withdraw();
		void display();
};

void bank::deposit()
{
	int depamt1;
	cout<<"\n Enter Deposit Amount : ";
	cin>>depamt1;
	balance+=depamt1;
}
void bank::withdraw()
{
	int witamt1;
	cout<<"\n Enter Withdraw Amount : ";
	cin>>witamt1;
	if(witamt1 > balance)
	{
		cout<<" Cannot Withdraw Amount";
		balance = witamt1;
	}
}
void bank::display()
{
	cout<<"\n ---------------------";
	cout<<"\n Account No : "<<ac_no;
	cout<<"\n Name : "<<nm;
	cout<<"\n Account Type : "<<acctype;
	cout<<"\n Balance : "<<balance;
}
int main()
{
	int acc_no;
	char name[100], acc_type[100];
	float balance;
	cout<<"\n Enter Details : \n";
	cout<<"-------------------------";
	cout<<"\n Account No : ";
	cin>>acc_no;
	cout<<"\n Name : ";
	cin>>name;
	cout<<"\n Account Type : ";
	cin>>acc_type;
	cout<<"\n Balance : ";
	cin>>balance;
	
	bank b1(acc_no, name, acc_type, balance);
	b1.deposit();
	b1.withdraw();
	b1.display();
	
	return 0;
}

//student marklist using multiple inheritance
#include<iostream>
using namespace std;
class student{
	public:
		char a[30];
		int roll;
		void get()
		{
			cout<<"enter the name: ";
			cin>>a;
			cout<<"enter the roll no: ";
			cin>>roll;
		}
};
class mark {
	public:
	int mark[4],i;
	void in()
	{
		cout<<"Enter the marks:";
		for(i=0;i<4;i++)
		{
			cin>>mark[i];
		}
	}
};
class process: public student, public mark
{
	public:
		int t;
		float avg;
		void calc()
		{
			t=mark[0]+mark[1]+mark[2]+mark[3];
			avg=t/4;
		}
		void dis()
		{
			cout<<"Name";
			cout<<"roll no";
			cout<<"marks entered";
			for(i=0;i<4;i++)
			{
				cout<<marks[i]<<"";
			}
			cout<<endl;
			cout<<"total marks";
			cout<<"average";
		}
};
int main()
{
	cout<<"\t\tstudent mark list using multiple inheritance"<<endl;
	cout<<"\t\t____________________________________________"<<endl;
	process v;
	v.get();
	v.in();
	v.calc();
	v.dis();
	
	return 0;
}

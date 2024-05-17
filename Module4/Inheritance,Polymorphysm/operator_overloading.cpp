#include<iostream>
using namespace std;
class addition{
	int a;
	public:
		void get()
		{
			cout<<"enter value for a\n";
			cin>>a;
		}
		void display()
		{
			cout<<"\nvalue for a is "<<a;
		}
		addition operator +(addition obj)
		{
			int ans;
			ans=a+obj.a;
			cout<<"\nanswer is "<<a;
		}
};
int main()
{
	addition obj1,obj2;
	cout<<"\nenter value for first object";
	obj1.get();
	obj1.display();
	cout<<"\nenter value for second object";
	obj2.get();
	obj2.display();
	obj1+obj2;
	
	return 0;
}

//copy constructor is used to copy value from another object
#include<iostream>
using namespace std;
class info{
	int id;
	string name;
	public:
		info(int id1, string name1)
		{
			id=id1;
			name=name1;
		}
		void display()
		{
			cout<<"id is "<<id<<"name is "<<name<<endl;
		}
};

int main()
{
	cout<<"object1\n";
	info obj1(101,"xyz");
	obj1.display();
	cout<<"object2\n";
	info obj2(obj1);
	obj2.display();
	cout<<"object3\n";
	info obj3(102,"abc");
	obj3.display();
	cout<<"object4\n";
	info obj4(obj3);
	obj4.display();
	
	return 0;
}

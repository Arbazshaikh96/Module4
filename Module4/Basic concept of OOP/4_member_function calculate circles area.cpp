//write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
#include<iostream>
using namespace std;
class circle{
float r,c,a;
public:
	void area(float r)
	{
		cout<<"Enter redius";
		cin>>r;
		cout<<"The area of circle is: "<<3.14*r*r;
	}
};
	

int main()
{
	int choice;
	cout<<"find area : 1 for area 2 for circumference";
	cin>>choice;
	circle obj;
	float no1, no2;
	switch(choice)
	{
		case 1:
			cout<<"enter values for circle";
			cin>>no1;
			obj.area(no1);
			break;
			default:
				{
					cout<<"invalid choice";
				}
	}
	
	return 0;
}


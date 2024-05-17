//Write a C++ program to create a class called Rectangle that has private 
//member variables for length and width. Implement member functions to 
//calculate the rectangle's area and perimeter. 
#include<iostream>
using namespace std;
class rectangle{
float length,width,area,perimeter;
public:
	rectangle(float length, float width)
	{
		area=length * width;
		perimeter= (length + width) *2;
	}
	void display()
	{
		cout<<"area of rectangle is: "<<area <<endl;
		cout<<"perimeter of rectangle is: "<<perimeter;
	}	
};


int main()
{
	float l, w;
	cout<<"enter the value for length: ";
	cin>>l;
	cout<<"enter the value for width: ";
	cin>>w;
	rectangle obj(l,w);
	obj.display();
	
	
	return 0;
}


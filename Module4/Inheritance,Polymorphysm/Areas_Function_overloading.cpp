// Write a program to calculate the area of circle, rectangle and triangle 
//using Function Overloading 
//Rectangle: Area * breadth 
//Triangle: ½ *Area* breadth 
//Circle: Pi * Area *Area 

#include<iostream>
#include<conio.h>

using namespace std;

const float pi=3.14;
float area(float n, float b, float h)
{
	float ar;
	ar=n*b*h;
	return ar;
}
float area(float r)
{
	float ar;
	ar=pi*r*r;
	return ar;
}
float area(float l, float b)
{
	float ar;
	ar=l*b;
	return ar;
};

int main()
{
	float b,h,r,l;
	float result;
	clrsrc();
	cout<<"\nEnter the base and height of triangle:\n";
	cin>>b>>h;
	result=area(0.5,b,h);
	cout<<"\nArea of triangle is:"<<result<<endl;
	
	cout<<"\nEnter the redius of circle: \n";
	cin>>r;
	result=area(r);
	cout<<"\nArea of circle is: "<<result<<endl;
	
	cout<<"\n Enter the length and height of rectangle: \n";
	cin>>l>>b;
	result=area(l,b);
	cout<<"\n Area of rectangle is: "<<resulr<<endl;
	getch();
}

//Write a program to find the multiplication values and the cubic values using 
//inline function
#include<iostream>
using namespace std;
class line{
	float a,b,ans,mul,cub;
	public:
		inline float mul(float a, float b)
		{
			ans = a * b;
			cout<<"multiplication value is: "<<mul;
		}
		inline float cub(float a)
		{
			ans = a* a* a;
			cout<<"cubic value is: "<<cub;
		}
};
int main()
{
	line obj();
	float val1, val2;
	clrscr();
	cout<<"enter two values: ";
	cin>>val1>>val2;
	obj.mul(val1,val2);
	obj.cub(val1);
	getch();
	
	return 0;
}

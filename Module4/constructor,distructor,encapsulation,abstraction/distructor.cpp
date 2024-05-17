//Distructor
#include<iostream>
using namespace std;
class addition{
	int n1, n2;
	public:
		//constructor
		addition(int no1, int no2)
		{
			n1=no1;
			n2=no2;
			cout<<"addition is "<<n1+n2;
		}
		//distructor
		~addition()
		{
			cout<<"distructor called";
		}
};
int main()
{
	cout<<"object1\n";
	addition obj(5,2);
	cout<<"object2\n";
	addition obj1(2,1);
	
	return 0;
}

//Write a C++ Program to illustrates the use of Constructors in multilevel 
//inheritance 
#include<iostream>

class Grandparent {
	public: 
	Grandparent() {
		std::cout<<"Grandperent Constructor called."<<std::endl;
	}
};
class Parent : public Grandparent {
	public :
		Parent() {
			std::cout<<"Parent Constructor called."<<std::endl;
		}
};
class Child : public Parent {
	public: 
	Child() {
		std::cout<<"Child Costructor called."<<std::endl;
	}
};
int main() {
	Child childObj;
	
	return 0;
}

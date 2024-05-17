//Write a C++ Program to show access to Private Public and Protected using 
//Inheritance
#include<iostream>

class Base {
	private : 
	int privateVar;
	protected : 
	int protectedVar;
	public : 
	int publicVar;
	
	Base() : privateVar(1), protectedVar(2), publicVar(3){}
	void display() {
		std::cout<<"private"<<privateVar<<std::endl;
		std::cout<<"protected"<<protectedVar<<std::endl;
		std::cout<<"public"<<publicVar<<std::endl;
	}
}; 

class Derived : public Base {
	public: 
	void accessBaseMembers() {
		std::cout<<"Accessing public member from base class: "<<publicVar<<std::endl;
		
		std::cout<<"Accessing protected member from Base class: "<<protectedVar<<std::endl;
	}
};

int main() {
	Derived derivedObj;
	std::cout<<"Accessing public member from Derived class object: "<<derivedObj.publicVar<<std::endl;
	derivedObj.accessBaseMembers();
	
	return 0;
}

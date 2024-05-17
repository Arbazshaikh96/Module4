//Write a C++ program to create a class called Car that has private 
//member variables for company, model, and year. Implement member 
//functions to get and set these variables. 
#include<iostream>
#include<string>

class Car {
	private : 
	std::string company;
	std::string model;
	int year;
	
	public : 
	Car(const std::string & comp, const std::string & mdl, int yr) :
		company(comp), model(mdl);
		
		std::string getCompany()
		{
			return company;
		}
		std::string getModel()
		{
			return model;
		}
		int getYear()
		{
			return year;
		}
		
		
		void setCompany(const std::string & comp)
		{
			company = comp;
		}
		
		void setModel(const std::string & mdl)
		{
			model = mdl;
		}
		
		void setYear(const std::string & yr)
		{
			year = yr;
		}
};


int main()
{
	Car car("AUDI", "A10", 2022);
	
	std::cout << "Company : "<< Car.getCompany()<<endl;
	std::cout << "Model : "<< Car.getModel()<<endl;
	std::cout << "Year : "<< Car.getYear()<<endl;
	
	Car.setCompany("BMW");
	Car.setModel("X5");
	Car.setYear(2023);
	
	std::cout << "\nUpdated Company : "<<Car.getCompany()<<endl;
	std::cout << "\nUpdated Model : "<<Car.getModel()<<endl;
	std::cout << "\nUpdated Year : "<<Car.getYear()<<endl;
	
	
	return 0;
}

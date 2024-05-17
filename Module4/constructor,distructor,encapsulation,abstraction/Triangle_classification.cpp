//Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene. 
#include<iostream>

class triangle {
	private : 
		double side1;
		double side2;
		double side3;
		
	public : 
		Triangle(double s1, double s2, double s3): 
		side1(s1), side2(s2), side3(3){};
		
		void determineType() {
			if (side1 == side2 && side2 == side3) {
				std::cout << "Equilateral Triangle"<<std::endl;
			}
			else if (side1 == side2 || side1 == side3 || side2 == side3){
				std::cout <<"Isosceles Triangle"<<std::endl;
			}
			else {
				std::cout <<"Scalene Triangle"<<std::endl;
			}
		}
};

int main()
{
	double s1,s2,s3;
	
	std::cout << "input the length of the three sides of the triangle : \n";
	std::cout << "side1";
	std::cin >> s1;
	std::cout << "side2";
	std::cin>> s2;
	std::cout << "side3";
	std::cin >> s3;
	
	Triangle triangle(s1, s2, s3);
	triangle.determineType();
	
	return 0;
}

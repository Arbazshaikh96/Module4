//Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks 
//obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;

class Student{
	protected:
		char name[20];
		int roll_number, age;
		public:
			Student(){}
			void getDetails(){
				cout<<"Input roll number: ";
				cin>>roll_number;
				cout<<"Input name: ";
				cin.get();
				cin.getline(name, 20);
				cout<<"Input age: ";
				cin>>age;
			}
			void putDetails(){
				cout<<"Roll number: "<<roll_number<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Age: "<<age<<endl;
			}
};

class Test: public Student{
	protected:
		int s1, s2, s3, s4, s5;
	public:
		Test(): Student(){}
		void getmarks(){
			cout<< "Input marks: \n";
			cout<<"English";
			cin>>s1;
			cout<<"Maths";
			cin>>s2;
			cout<<"Gujarati";
			cin>>s3;
			cout<<"stat";
			cin>>s4;
			cout<<"Accounts";
			cin>>s5;
		}
		void putmarks(){
			cout<<"English: "<<s1<<endl;
			cout<<"Maths: "<<s2<<endl;
			cout<<"Gujarati: "<<s3<<endl;
			cout<<"stat: "<<s4<<endl;
			cout<<"Account: "<<s5<<endl;
		}
};

class Sports: public Student{
	protected:
		int indoor, outdoor;
		public:
			Sports(): Student(){}
			void getscore(){
				cout<<"Input Sports Score: \n";
				cout<<"Indoor: ";
				cin>>indoor;
				cout<<"Outdoor: ";
				cin>>outdoor;
			}
			void putscore(){
				cout<<"Indoor: "<<indoor<<endl;
				cout<<"Outdoor: "<<outdoor<<endl;
			}
};

class Result: public Sports, public Test{
	int total;
	public:
		Result(): Sports(), Test(){
			Test::getDetails();
			getmarks();
			getscore();
			total = indoor + outdoor + s1 + s2 + s3;
		}
		void display(){
			cout<<endl;
			Test::putDetails();
			cout<<"Test Marks: \n"; Test::putmarks();
			cout<<"Sports Score: \n";Sports::putscore();
			cout<<"Total: "<<total<<endl;
			cout<<"Percentage: "<<total /7 <<" % "<<endl;
		}
};

int main(){
	Result result;
	result.display();
	
	return 0;
}

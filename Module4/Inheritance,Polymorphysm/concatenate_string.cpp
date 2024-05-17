//concatenate two string
#include<iostream>
#include<string.h>
using namespace std;
class merge_string{
	char name1[50],name2[50];
	public:
		merge_string(char s1[50],char s2[50])
		{
			strcpy(name1,s1);
			strcpy(name2,s2);
		}
		merge_string operator + ()
		{
			cout<<"merged string is "<<strcat(name1,name2);
		}
};


int main()
{
	merge_string obj("janvi","desai");
	+obj;
	
	return 0;
}

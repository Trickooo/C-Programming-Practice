#include <iostream>
using namespace std;


void myFunction(string name,
				string month,
				int year,
				int age,
				int day = 99){ //we placed our defaults at the last part in order for function to work, the problem is that our parameters are not at the end for both cases as the previous parameter value cannot be empty before another like the case for patrick and princess. princess' default is at last parameter and patrick's was before the last parameter, Patrick's cannot be empty and we couldn't really use the same function for this because the output would be wrong.
					cout << "My name is " << name << ", age is " << age << ", My birthday is " << month << " " << day << " " << year << endl;
				}
				
void specialFunction(string name,
					string month,
					int year,
					int day,
					int age = 100){	
					// I created another function in order for our default for Patrick to work because in one of C++ default constraints is that the default should always be the last parameter, if not, the parameter will ask for default values for the next parameter values.
					cout << "My name is " << name << ", age is " << age << ", My birthday is " << month << " " << day << " " << year << endl;
				}
int main(int argc, char** argv) {
	
	myFunction("Christopher", "September", 2001, 21, 20);
	myFunction("Marshal Jade", "April", 2003, 19, 02);
	myFunction("Pauline", "May", 2002, 20, 27);
	myFunction("Princess", "September", 2002, 20);
	specialFunction("Patrick", "September", 2001, 26);
	//We made special function in order to cout the defaul value for our age, which cannot be done in our myFunction because we have two default values
	//Only the default value for the last part could be used.
	
	myFunction("Matthew", "March", 2001, 21, 05);
	myFunction("Alyzza", "June", 2003, 19, 12);
	myFunction("Cyrus", "December", 2002, 19, 25);
	return 0;
}

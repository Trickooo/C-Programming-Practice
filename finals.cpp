#include <iostream>
using namespace std;

class myClass{
	public:
		int digResult;
		int UCResult;
		int LCResult;
		string head = "#########################";
		string a = "|    YOUR PASSWORD IS   |";
		string b = "|          VALID        |";
};


int digit(string a, int b);
int letter(string a, int b);
int upperCase(string a, int b);
int lowerCase(string a, int b);

int main() {
	myClass obj;
	int count;
	string pass;
	cout << "Please type in your password ( Must be 8 characters or less ): ";
	cin >> pass;
	
		for(int i = 0; i < 10; i++){
			if(pass[i] == '\0'){
				break;
			}else{
				count++;
			}
		}
		
	obj.digResult = digit(pass, count);
	obj.UCResult = upperCase(pass, count);
	obj.LCResult = lowerCase(pass, count);

		if(obj.digResult == 0)
			cout << "INVALID PASSWORD: Must contain numbers." << endl;
	
		if(obj.LCResult == 0)
			cout << "INVALID PASSWORD: Must contain 1 lowercase letter." << endl;
			
		if(obj.UCResult == 0)
			cout << "INVALID PASSWORD: Must contain 1 uppercase letter." << endl;
			
		if(obj.digResult == 1 && obj.LCResult == 1 && obj.UCResult == 1){
			cout << obj.head << endl;
			cout << obj.a << endl;
			cout << obj.b << endl;
			cout << obj.head << endl;
		}
				
	return 0;
}

int digit(string pass, int count){
	for(int o = 0; o < count; o++){
		if(isdigit(pass[o])){
			return 1;
			break;
		}
	}
	return 0;
}

int upperCase(string pass, int count){
	for(int p = 0; p < count; p++){
		if(isupper(pass[p])){
			return 1;
			break;
	}
	}
	return 0;
}

int lowerCase(string pass, int count){
	for(int j = 0; j < count; j++){
		if(islower(pass[j])){
			return 1;
			break;
		}
	}
	return 0;
}

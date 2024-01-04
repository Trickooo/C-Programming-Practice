#include <iostream>
#include <string>
using namespace std;
class myClass{
	public:
		int score;
		string answer;
		string name;
		string type;
};

int correct(){
	myClass obj;	
		cout << "Your answer is CORRECT!" << endl;
		system("pause");
		system("CLS");
}

int wrong(){
	myClass obj;
		cout << "Sorry your answer is wrong. :(" << endl;
		system("pause");
		system("CLS");
}


int main() {
	myClass obj;
	
	obj.score = 0;
	
	cout << "HELLO! What is your name? ";
	cin >> obj.name;

	cout << "Good day " << obj.name <<"! \n \n" << "Welcome to the Philippine Quiz. \n \n" << "Type anything to continue, type exit to quit. \n";
	cin >> obj.type;
		if(obj.type == "Exit" || obj.type == "exit"){
			exit(0);
		}
	
	system("CLS");
	
	cout << "Your Current Score: " << obj.score << endl << endl;
	cout << endl << "Question 1. \n" << "Who is our national Hero?" << endl;
	cout << endl << "		a. Andres Bonifacio		b. Lapu-Lapu";
	cout << endl << "		c. Jose Rizal			d. Juan Luna" << endl;
	cout << "Type your answer: " << endl;
	cin >> obj.answer;
		if(obj.answer == "c" || obj.answer == "C"){
			correct();
			obj.score += 100;
		} else {
			wrong();
			obj.score -= 50;
		}
	
	cout << "Your Current Score: " << obj.score << endl << endl;
	cout << endl << "Question 2. \n" << "Where was Jose Rizal Shot?" << endl;
	cout << endl << "		a. Circuit Makati		b. Tayuman";
	cout << endl << "		c. Dapitan			d. Bagumbayan" << endl;
	cout << "Type your answer: " << endl;
	cin >> obj.answer;
		if(obj.answer == "d" || obj.answer == "D"){
			correct();
			obj.score += 100;
		} else {
			wrong();
			obj.score -= 50;
		}

	cout << "Your Current Score: " << obj.score << endl << endl;
	cout << endl << "Question 3. \n" << "What is the name of Juan Luna's famous art?" << endl;
	cout << endl << "		a. Spoliarium		b. Scream";
	cout << endl << "		c. Mona Lisa		d. Sa aking mga kabata" << endl;
	cout << "Type your answer: " << endl;
	cin >> obj.answer;
		if(obj.answer == "a" || obj.answer == "A"){
			correct();
			obj.score += 100;
		} else {
			wrong();
			obj.score -= 50;
		}
	
	cout << "Your Current Score: " << obj.score << endl << endl;
	cout << endl << "Question 4. \n" << "Who is the first President of Commonwealth?" << endl;
	cout << endl << "		a. Cory Aquino			b. Emilio Aguinaldo";
	cout << endl << "		c. Diosdado Macapagal		d. Manuel Quezon" << endl;
	cout << "Type your answer: " << endl;
	cin >> obj.answer;
		if(obj.answer == "d" || obj.answer == "D"){
			correct();
			obj.score += 100;
		} else {
			wrong();
			obj.score -= 50;
		}
		
	cout << "Your Current Score: " << obj.score << endl << endl;
	cout << endl << "Question 5. \n" << "Which president died from an aircraft disaster?" << endl;
	cout << endl << "		a. Joseph Estrada		b. Fidel Ramos";
	cout << endl << "		c. Ramon Magsaysay		d. Manuel Roxas" << endl;
	cout << "Type your answer: " << endl;
	cin >> obj.answer;
		if(obj.answer == "c" || obj.answer == "C"){
			correct();
			obj.score += 100;
		} else {
			wrong();
			obj.score -= 50;
		}
	
	cout << "You have finished the Philippine Quiz!" << endl;
		if(obj.score > 400){
			cout << "Congratulations " << obj.name << "!" << endl << "Your final score is: " << obj.score << endl << "You know a lot about our Country's History!" << endl;
		}else if(obj.score <= 399 && obj.score >= 200){
			cout << "Congratulations " << obj.name << "!" << endl << "Your final score is: " << obj.score << endl << "You have ample knowledge about the Country's History!" << endl;
		}else{
			cout << "Unfortunately " << obj.name << "," << endl << "Your final score is: " << obj.score << endl << "You still have lots of things to learn about the Country." << endl;
		}
	system("pause");
	
	return 0;
}

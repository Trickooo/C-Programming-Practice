#include<iostream>
using namespace std;

int main(){
    cout << "This Program is written by: Gonzales, John Patrick\n";
    cout << "--------------------------------\n";
    cout << " ****** \n";
    cout << "*      *        *        *\n";
    cout << "*               *        *\n";
    cout << "*            *******  *******\n";
    cout << "*               *        *   \n";
    cout << "*      *        *        *   \n";
    cout << " ******\n";
    cout << "--------------------------------\n";
    
    string player1;
    cout << "Whats Player1 name? ";
    cin >> player1;
     
    int choice1;
    cout << "Enter the number " << player1 << ": ";
    cin >> choice1;
    
     if(choice1 > 0){
    cout << player1 << ", The number you entered is a positive number. \n";
    } else if (choice1 < 0) {
    cout << player1 << ", The number you entered is a negative number. \n";
    } else {
    cout << player1 << ", The number you entered is zero. \n";
    }
    
    system("CLS");
    	
    string player2;
    int choice2;
    cout << "It's player2 turn. \n";
    cout << "\nWhats Player2 name?: ";
    cin >> player2;
    

			string choice3;
	while(choice3 != "no" | choice3 != "No" | choice3 != "NO" | choice3 != "nO");{
		cout << player2 << ", What's your guess number? ";
		cin >> choice2;

		
		 if (choice1 == choice2){
    cout << "You are correct " << player2 << "!";
   	cout << "Would you like to try guessing again?";
	cout << "Tpe 'no' if you dont want to continue.";
	cin >> choice3;

    } else if (choice1 > choice2) {
    cout << "Sorry " << player2 << " that number is lesser than the secret number. \n";
    cout << "Would you like to try guessing again?";
	cout << "Tpe 'no' if you dont want to continue.";
	cin >> choice3; 

    } else if (choice1 < choice2) {
    cout << "Sorry " << player2 << " that number is more than the secret number. \n";
    	cout << "Would you like to try guessing again?";
	cout << "Tpe 'no' if you dont want to continue.";
	cin >> choice3;

    } else { 
    cout << "Sorry, please try again. \n";
	cout << "Would you like to try guessing again?";
	cout << "Tpe 'no' if you dont want to continue.";
	cin >> choice3;

    }
	}
    return 0;
}

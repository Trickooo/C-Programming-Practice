#include<iostream>
using namespace std;
int main()
{   cout << "This Program is written by: \n";
    cout << "------------------------------------\n";
    cout << " ******        *         *********\n"; 
    cout << "*      *      * *            *\n";
    cout << "*      *     *   *           *\n";
    cout << "*******     *******          *\n";
    cout << "*          *       *         *\n";
    cout << "*         *         *        *\n";
    cout << "*        *           *       *\n";
    cout << "------------------------------------\n";
    
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
    
    string player2;
    int choice2;
    string choice3;
    cout << "It's player2 turn.";
    cout << endl << endl << "Whats Player2 name?: ";
    cin >> player2;
	
	do{
		cout << endl << player2 << ", what's your guess number? ";
    	cin >> choice2;
		if (choice1 == choice2){
			cout << "Yey! You are CORRECT " << player2 << "!\n";
			string exit;
			cout << "Would you like to try guessing again? \n";
			cout << "Type 'no' if you dont want to continue.\n";
			cin >> exit;
	
			if(exit== "No" | exit == "NO" | exit == "no" | exit == "nO"){
	    	break;
			}else{
				continue;
			}
	}   else if (choice1 > choice2){
			cout << "Sorry " << player2 << ", that number is lesser than the secret number.\n";
			string exit;
			cout << "Would you like to try guessing again? \n";
			cout << "Type 'no' if you dont want to continue.\n";
			cin >> exit;
	
			if(exit== "No" | exit == "NO" | exit == "no" | exit == "nO"){
	    	break;
			}else{
				continue;
			}
	}	else if (choice1 < choice2){
			cout << "Sorry " << player2 << ", that number is higher than the secret number.\n";
			string exit;
			cout << "Would you like to try guessing again? \n";
			cout << "Type 'no' if you dont want to continue.\n";
			cin >> exit;
	
			if(exit== "No" | exit == "NO" | exit == "no" | exit == "nO"){
	    	break;
			}else{
				continue;
			}
	}
}
	while(choice1 != choice2);
	
    return 0;
}

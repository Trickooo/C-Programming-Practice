#include<iostream>
using namespace std;

class myClass {
public:
    int myInt;
    string gender;
    string choice1;
    string choice2;
    int height1;
    int height2;
    int a = 10;
    int b = 25;
    int c = 40;
    int d = 50;
    int e = 85;
    int f = 90;
    int g = 95;
    int h = 105;
    string destination;
    int payment;
    int change;
    
};

void UDMTrainNR() {
    myClass Obj2;
    cout << endl << "From Lucena to: " << endl << "Sariaya - 15php";
    cout << endl << "Candelaria - 25 php" << endl << "Tiaong - 40 php";
    cout << endl << "San Pablo - 50 php" << endl << "IRRI - 85 php";
    cout << endl << "Los Banos - 90 php" << endl << "Masili - 95 php";
    cout << endl << "Calamba - 105 php" << endl;
    
    cout << "What is your Destination: ";
    cin >> Obj2.destination;
    cout << "How much is your payment: ";
    cin >> Obj2.payment;
        if(Obj2.destination == "sariaya" || Obj2.destination == "Sariaya"){
           Obj2.change = Obj2.payment - Obj2.a;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "candelaria" || Obj2.destination == "Candelaria"){
           Obj2.change = Obj2.payment - Obj2.b;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "tiaong" || Obj2.destination == "Tiaong"){
           Obj2.change = Obj2.payment - Obj2.c;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "San Pablo" || Obj2.destination == "san pablo"){
           Obj2.change = Obj2.payment - Obj2.d;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "IRRI" || Obj2.destination == "irri"){
           Obj2.change = Obj2.payment - Obj2.e;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "Los Banos" || Obj2.destination == "los banos"){
           Obj2.change = Obj2.payment - Obj2.f;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        } else if(Obj2.destination == "Masili" || Obj2.destination == "masili"){
           Obj2.change = Obj2.payment - Obj2.g;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        }else if(Obj2.destination == "Calamba" || Obj2.destination == "calamba"){
           Obj2.change = Obj2.payment - Obj2.h;
           cout << "Your Change is " << Obj2.change << "Php.";
           cout << endl << "Welcome Aboard to UDMNR Train!";
        }
};

int main() {
    myClass Obj;
    cout << "Welcome to UDMNR Train!" << endl << "Are you male of Female: ";
    cin >> Obj.gender;

    if(Obj.gender == "Female" || Obj.gender == "female") {
        cout << "Are you currently expecting or pregnant: ";
        cin >> Obj.choice1;
        if(!(Obj.choice1 == "no" || Obj.choice1 == "NO" ||
                Obj.choice1 == "No" || Obj.choice1 == "nO")) {
            cout << "Sorry Maam, as an expectant mother you cannot ride in the front seat.";
        } else {
            cout << "Are you carrying an Infant: ";
            cin >> Obj.choice2;
            if(!(Obj.choice2 == "no" || Obj.choice2 == "NO" ||
                    Obj.choice2 == "No" || Obj.choice2 == "nO")) {
                cout << "Sorry you Maam, for the infant's safety you cannot ride in the front seat.";
            } else {
                cout << "Please Enter Height in Foot: ";
                cin >> Obj.height1;
                cout << "Please Enter Height in Inches: ";
                cin >> Obj.height2;
                if(Obj.height1 <= 4 && Obj.height2 <= 11) {
                    cout << "Sorry Maam, due to height limitation you cannot ride in the front seat.";
                } else {
                    UDMTrainNR();
            }
        }
    }
}

if(Obj.gender == "Male" || Obj.gender == "male") {
            cout << "Are you carrying an Infant: ";
            cin >> Obj.choice2;
            if(!(Obj.choice2 == "no" || Obj.choice2 == "NO" ||
                    Obj.choice2 == "No" || Obj.choice2 == "nO")) {
                cout << "Sorry you Maam, for the infant's safety you cannot ride in the front seat.";
            } else {
                cout << "Please Enter Height in Foot: ";
                cin >> Obj.height1;
                cout << "Please Enter Height in Inches: ";
                cin >> Obj.height2;
                if(Obj.height1 <= 4 && Obj.height2 <= 11) {
                    cout << "Sorry Sir, due to height limitation you cannot ride in the front seat.";
                } else {
                    UDMTrainNR();
            }
        }
    }

    return 0;
    }

#include<iostream>
using namespace std;

   class numIn {
       public:
          int numBase;
          int numHeight;
          int A;
   };
   
int main(){
    string answer;
    
while(!(answer == "No"
   || answer == "no"
   || answer == "NO"
   || answer == "nO")){
    numIn Obj;
    cout << "Please enter the base: \n";
    cin >> Obj.numBase;
    
    cout << "Please enter the Height: \n";
    cin >> Obj.numHeight;
    
    Obj.A = 0.5 * Obj.numBase * Obj.numHeight;
    cout << endl << "With the base of " << 
    Obj.numBase << ".";
    cout << endl << "With the height of " << 
    Obj.numHeight << ".";
    cout << endl << "The Area of the Triangle is " 
    << Obj.A << ".";
    
    cout << endl << "\nWould you like go try again? \n" 
    << endl;
    cin >> answer;
}
    return 0;
}
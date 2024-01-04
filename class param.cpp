#include<iostream>
using namespace std;

class Info{
    public:
       string firstName;
       string lastName;
       int studNum;
       string email;
       string location;
    
    Info(string w, string x, int y, string z, string l){
       firstName = w;
       lastName = x;
       studNum = y;
       email = z;
       location = l;
    }
};

int main()
{
    Info infoObj("Cyrus", "Francisco", 1910, "CYRUSFRANCISCO19@GMAIL.COM", "Manila");
    Info infoObj2("J. Joseph", "Fruelda", 2117, "Jhonfruelda18@gmail.com", "Manila");
    Info infoObj3("Cristian Rico", "Gabutin", 1616, "caloocanboy@rockmail.com", "Caloocan");
    Info infoObj4("Mark", "Menes", 2020, "KRM31@yahoo.com", "Manila");
    Info infoObj5("Elmer John", "Manabat", 2022, "Manabatelmerjohn@gmail.com", "Manila");
    
    cout << "I AM " << infoObj.firstName << " " << infoObj.lastName << " - " << infoObj.studNum << " - " << infoObj.email << " living at " << infoObj.location << ". \n";
    cout << "I AM " << infoObj2.firstName << " " << infoObj2.lastName << " - " << infoObj2.studNum << " - " << infoObj2.email << " living at " << infoObj2.location << ". \n";
    cout << "I AM " << infoObj3.firstName << " " << infoObj3.lastName << " - " << infoObj3.studNum << " - " << infoObj3.email << " living at " << infoObj3.location << ". \n";
    cout << "I AM " << infoObj4.firstName << " " << infoObj4.lastName << " - " << infoObj4.studNum << " - " << infoObj4.email << " living at " << infoObj4.location << ". \n";
    cout << "I AM " << infoObj5.firstName << " " << infoObj5.lastName << " - " << infoObj5.studNum << " - " << infoObj5.email << " living at " << infoObj5.location << ". \n";
    return 0;
}
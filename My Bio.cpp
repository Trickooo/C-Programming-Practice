#include<iostream>
using namespace std;

int main()
{
    string your_name ="John Patrick Gonzales";
    string nick_name ="Patrick";
    int your_age = 21;
    string your_address = "721 Long NASA St., Gagalangin, Tondo, MLA. \n";
    string father_name = "Alfredo Gonzales";
    string mother_name = "Leonidas Mendoza \n";
    int no_of_siblings = 4;
    string sibling_1 = "\nAlfredo Gonzales Jr \n";
    string sibling_2 = "Angelica Gonzales \n";
    string sibling_3 = "Alfred Gonzales \n";
    string sibling_4 = "Freniephina Camara \n";
    string your_course = "BSIT - Data Science";
    string your_reason = "I want to learn how to code because I was Amazed of the things I can do with it. \n";
    string hobby_1 = "\nPlaying Terraria \n";
    string hobby_2 = "Watching tech YouTubers \n";
    string hobby_3 = "Learning codes! \n";
    int month = 9;
    string month_word = "September ";
    int day = 26;
    int year = 2001;

    cout << "MY BIO \n";
    cout << "My name is " << your_name << ". My nickname is " << nick_name << endl;
    cout << "I am " << your_age << " years old. I live at " << your_address;
    cout << "My father's name is " << father_name << " and my mother's name is " << mother_name;
    cout << "I have " << no_of_siblings << " and they are: " << sibling_1 << sibling_2 << sibling_3 << sibling_4;
    cout << "I am currently taking " << your_course << " because " << your_reason;
    cout << "My Hobbies are: " << hobby_1 << hobby_2 << hobby_3;
    cout << "I was born " << month_word << day << ", " << year << endl;
    cout << "My lucky number is " << to_string(day) << to_string(month) << to_string(year) << endl;
    cout << "My alias name is " << nick_name << to_string(day) << to_string(month) << to_string(year);

    return 0;
}

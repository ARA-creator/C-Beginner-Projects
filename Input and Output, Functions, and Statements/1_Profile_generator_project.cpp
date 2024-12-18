#include <iostream>
#include <string>
#include <limits>
using namespace std;

void displayLog(string logMessage){
    cout << logMessage << endl;
}

string get_name(){
    string name;
    cout << "What is your full name?"<< endl;
    getline(cin, name);
    return name;
}

int get_age(){
    int age;
    cout << "How old are you?" << endl;
    cin >> age;
    return age;
}

string get_hobby(){
    string hobby;
    cout << "What is your favorite hobby?" << endl;
    cin.ignore();
    getline(cin, hobby);
    return hobby;
}

string formatProfilecard(string name, int age, string hobby){
    string card;
    card += "***************************************************\n";
    card += "*                   PROFILE CARD                   *\n"; 
    card += "***************************************************\n";
    card += "Name:" + name + "\n";          
    card += "Age:" + to_string(age) +  "\n";
    card += "Hobby: " + hobby + "\n";
    card += "***************************************************\n";
    return card;
}

int main(){
    // Log message
    displayLog("Starting Program...");

    //Collect user inputs
    string name = get_name();
    int age = get_age();
    string hobby = get_hobby();

    string profile_card = formatProfilecard(name, age, hobby);
    cout << profile_card;
 
    displayLog("Program finished successfully");
    return 0;
}

#include <iostream>
#include <string>
#include <limits> 
using namespace std;

void displayLogMessage(string LogMessage){
    cout << LogMessage << endl;
}

string get_name(){
    string name;
    cout << "What is your name?" << endl;
    getline(cin,name);
    return name;
}

void convert_celcius_to_fahrenheit(){
    int celcius;
    cout << "What is your temperature in celcius" << endl;
    cin >> celcius;
    int degrees = (celcius * 1.8) + 32;
    cout << "Your temperature when coverted to fahrenheit is, " << degrees << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
} 

void convert_fahrenheit_to_celcius(){
    int fahrenheit;
    cout << "What is your temperature in fahrenheit" << endl;
    cin >> fahrenheit;
    int degree = (fahrenheit - 32) * 0.56;
    cout << "Your temperature when converted to celcius is, " << degree << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main(){

    //Log the introductory messages.
    displayLogMessage("Starting Program...\n");
    
    displayLogMessage("Collecting details...\n");

    // Get the user's name;
    string name = get_name();

    // Perform the temperature conversions.
    convert_celcius_to_fahrenheit();
    convert_fahrenheit_to_celcius();

    displayLogMessage("Program Finished successfully...");

    return 0;
}


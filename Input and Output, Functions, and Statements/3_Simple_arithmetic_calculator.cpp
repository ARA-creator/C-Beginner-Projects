#include <iostream>
#include <limits>
#include <string>
using namespace std;

void displayMessage(string Message){
    cout << Message << endl;
}

void basic_arithmetic(int first_param, int second_param){
    if (second_param == 0){
        cerr << "Error: Division by zero is undefined!"<<endl;
        return;
    }
    
    int addition = first_param + second_param;
    int subtraction = first_param - second_param;
    int multiplication = first_param * second_param;
    int division = first_param / second_param;
    cout << "The numbers when added results in: "<< addition <<endl;
    cout << "The numbers when multiplied results in: " <<multiplication <<endl;
    cout << "The numbers when subtracted results in: "<< addition <<endl;
    cout << "The numbers when divided results in: "<< division <<endl;   
}

int main(){
    
    displayMessage("Beginning basic arithmetic...");

    //Get input for the numbers
    int num1, num2;
    cout << "Enter the a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    basic_arithmetic(num1, num2);

    displayMessage("Calculations Complete!");
    return 0;
}

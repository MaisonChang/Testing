//Maison Chang, lab 2, CS002
#include <iostream>
#include <string>

int main() {

    using namespace std;
    //Declares the input variables
    int firstInt;
    int secondInt;
    //Gives directions for user to input two variables
    cout << "Enter the first integer: "; 
    cin >> firstInt;
    cout << "Enter the second integer: "; 
    cin >> secondInt;
    //Declaring the answers for each simple function
    int sum = firstInt + secondInt;
    int diff = firstInt - secondInt;
    int product = firstInt * secondInt;
    int quotient = firstInt / secondInt;
    int remainder = firstInt % secondInt;
    //Repeats the integers previously typed by the user
    cout << "The first integer is: " << firstInt << endl;
    cout << "The second integer is: " << secondInt << endl;
    //Stating the answers for each simple function
    cout << firstInt << " + " << secondInt << " = " << sum << endl; 
    cout << firstInt << " - " << secondInt << " = " << diff << endl;
    cout << firstInt << " * " << secondInt << " = " << product << endl;
    cout << firstInt << " / " << secondInt << " = " << quotient << endl;
    cout << firstInt << " % " << secondInt << " = " << remainder << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main() {
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Please enter two integers separated by a space: ";
    cin >> num1 >> num2;
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;

    newNum = num1 * 2 + num2;
    cout << "The value of newNum = " << newNum << "." << endl;

    newNum += SECRET;
    cout << "Now the value of newNum = " << newNum << "!" << endl;

    cout << "Enter your last name: ";
    cin >> name;

    cout << "Enter a decimal number betwen 0 and 70: ";
    cin >> hoursWorked;
    wages = hoursWorked * RATE;

    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    return 0;
}
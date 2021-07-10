
#include <iostream>

using namespace std;

const int WORK_WEEKS = 5;
const double TAX_RATE = 0.14;
const double CLOTHES = 0.1;
const double SCHOOL_SUPPLIES = 0.01;
const double BONDS = 0.25;
const double PARENT_BONDS = 0.50;



int main() {
    double hourlyRate, preTax, postTax, clothes, schoolSupplies, bondsBudget;
    int hoursWorked;

    cout << "Enter your hourly pay rate and hours worked in a week: ";
    cin >> hourlyRate >> hoursWorked;

    preTax = hourlyRate * hoursWorked * WORK_WEEKS;
    postTax = preTax * (1.0 - TAX_RATE);
    clothes = postTax * CLOTHES;
    schoolSupplies = postTax * SCHOOL_SUPPLIES;
    bondsBudget = (postTax - clothes - schoolSupplies) * BONDS;

    cout << "You earned $" << preTax << ", which puts $" << postTax << " in your pocket after taxes." << endl;
    cout << "You spend $" << clothes << " on clothes and other accessories." << endl;
    cout << "You spend $" << schoolSupplies << " on school supplies." << endl;
    cout << "You spend $" << bondsBudget << " buying savings bonds, and your parents contribute an additional $"
         << bondsBudget * PARENT_BONDS << endl;

    return 0;
}
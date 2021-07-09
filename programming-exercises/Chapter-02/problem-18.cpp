
#include <iostream>

using namespace std;

const double PI = 3.141593;

int main() {
    double r, price;

    cout << "Enter the radius, in inches, and price of a pizza: ";
    cin >> r >> price;

    cout << "Your pizza costs $" << price / (PI * r * r) << " per square inch." << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, num3, num4, num5;

    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << "The sum rounded to the nearest integer is " << round(num1 + num2 + num3 + num4 + num5) << endl;

    return 0;
}
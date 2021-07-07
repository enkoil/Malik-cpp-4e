
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2, num3, num4, num5;

    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << "You entered: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", and " << num5 << endl;

    int intSum = round(num1) + round(num2) + round(num3) + round(num4) + round(num5);

    cout << "The rounded sum is " << intSum << endl;
    cout << "The average is " << intSum / 5.0 << endl;

    return 0;
}
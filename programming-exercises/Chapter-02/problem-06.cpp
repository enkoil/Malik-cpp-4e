// This program reads in a decimal number
// and rounds it to the nearest integer

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double in;

    cout << "Enter a decimal number: ";
    cin >> in;

    int out = round(in);

    cout << in << " rounded to the nearest integer is " << out
         << endl;

    return 0;
}
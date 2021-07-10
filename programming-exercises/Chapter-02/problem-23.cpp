
#include <iostream>

using namespace std;

int main() {
    int quarters, dimes, nickels;

    cout << "How many quarters? ";
    cin >> quarters;
    cout << "How many dimes? ";
    cin >> dimes;
    cout << "How many nickels? ";
    cin >> nickels;

    cout << "You have " << (quarters * 25) + (dimes * 10) + (nickels * 5) << " cents." << endl;

    return 0;
}
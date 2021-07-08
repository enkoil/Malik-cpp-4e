
#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a 4-digit positive integer: ";
    cin >> num;

    cout << num / 1000 << endl;
    num %= 1000;
    cout << num / 100 << endl;
    num %= 100;
    cout << num / 10 << endl;
    cout << num % 10 << endl;

    return 0;
}
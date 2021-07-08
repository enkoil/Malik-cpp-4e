
#include <iostream>

using namespace std;

int main() {
    int seconds, minutes, hours;

    cout << "Enter the time in seconds: ";
    cin >> seconds;

    hours = seconds / (60 * 60);
    seconds %= (60 * 60);
    minutes = seconds / 60;

    cout << hours << ":" << minutes << ":" << seconds % 60 << endl;

    return 0;
}
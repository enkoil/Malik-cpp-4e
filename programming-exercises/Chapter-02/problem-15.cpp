
#include <iostream>

using namespace std;

int main() {
    int hours, minutes, seconds;

    cout << "Enter the hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;

    cout << "This is " << (hours * 60 * 60) + (minutes * 60) + seconds << " seconds." << endl;

    return 0;
}
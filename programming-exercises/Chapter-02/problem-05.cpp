
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    double studyHours;

    cout << "Enter your name: ";
    cin >> name;
    cout << "How many hours do you need to study?: ";
    cin >> studyHours;

    cout << "Hello, " << name << "! You need to study " << studyHours
         << " hours. Get to work!" << endl;
    
    return 0;
}
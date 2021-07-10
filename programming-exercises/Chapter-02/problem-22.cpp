
#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b, c;

    cout << "Enter three strings: ";
    cin >> a >> b >> c;

    cout << a << " " << b << " " << c << endl;
    cout << a << " " << c << " " << b << endl;
    cout << b << " " << a << " " << c << endl;
    cout << b << " " << c << " " << a << endl;
    cout << c << " " << a << " " << b << endl;
    cout << c << " " << b << " " << a << endl;

    return 0;
}
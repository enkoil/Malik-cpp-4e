
#include <iostream>

using namespace std;

int main() {
    double length, width;

    cout << "Enter the length and width of a rectangle: ";
    cin >> length >> width;

    cout << "The area of the rectangle is " << length * width << " square units." << endl;
    cout << "The perimeter of the rectangle is " << 2 * (length + width) << " units." << endl;

    return 0;
}
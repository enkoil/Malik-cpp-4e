
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lengthCM, lengthIN, yard, foot;

    cout << "Input a length in centimeters: ";
    cin >> lengthCM;

    lengthIN = round(lengthCM / 2.54);

    yard = lengthIN / (3 * 12);
    lengthIN %= (3 * 12);
    foot = lengthIN / 12;

    cout << "This is " << yard << " yard(s), " << foot << " feet (foot), and " << lengthIN % 12 << " inch(es)." << endl;

    return 0;
}
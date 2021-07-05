
#include <iostream>

using namespace std;

int main() {
    double num1 = 75.35, num2 = -35.56, num3 = 15.76;
    double average = (num1 + num2 + num3) / 3;
    
    cout << "The average of " << num1 << ", " << num2 << ", and "
         << num3 << " is " << average << endl;
    
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

const double CARTON_LITERS = 3.78;
const double LITER_COST = 0.38;
const double CARTON_PROFIT = 0.27;

int main() {
    double liters;
    int cartons;

    cout << "Enter the liters of milk produced: ";
    cin >> liters;

    cartons = round(liters / CARTON_LITERS);

    cout << "This is " << cartons << " cartons of milk." << endl;
    cout << "The cost was $" << liters * LITER_COST << ", and the profit was $" << cartons * CARTON_PROFIT << endl;

    return 0;
}
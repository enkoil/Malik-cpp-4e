#include <iostream>
#include <cmath>

using namespace std;

const double CARTON_LITERS = 3.78;

int main() {
    double liters, literCost, cartonProfit;
    int cartons;

    cout << "Enter the liters of milk produced: ";
    cin >> liters;
    cout << "Enter the cost to produce one liter: ";
    cin >> literCost;
    cout << "Enter the profit per carton: ";
    cin >> cartonProfit;

    cartons = round(liters / CARTON_LITERS);

    cout << "\nThis is " << cartons << " cartons of milk." << endl;
    cout << "The cost was $" << liters * literCost << ", and the profit was $" << cartons * cartonProfit << endl;

    return 0;
}
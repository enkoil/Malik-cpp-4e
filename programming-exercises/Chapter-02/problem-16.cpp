
#include <iostream>

using namespace std;

int main() {
    double price, markup, tax, salePrice, salesTax;

    cout << "Enter the item price: ";
    cin >> price;
    cout << "Enter the mark-up percent (10% is entered as 0.1): ";
    cin >> markup;
    cout << "Enter the sales tax rate (5.3% is entered as 0.053): ";
    cin >> tax;

    salePrice = price * (1 + markup);
    salesTax = salePrice * tax;

    cout << "The item price is $" << price << endl;
    cout << "After a mark-up of " << markup * 100 << "%, the sale price of the item is $" << salePrice << endl;
    cout << "With a sales tax rate of " << tax * 100 << "%, the sales tax is $" << salesTax << endl;
    cout << "The final price is $" << salePrice + salesTax << endl;

    return 0;
}
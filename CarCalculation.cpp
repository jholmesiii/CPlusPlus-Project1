// CarCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double basePrice, options, totalPrice, subTotal, taxedAmount, v8Price, salesTax;
    int region;
    char selection, lowerSelection;

    cout << "What is the base price?\n" << "$";
    cin >> basePrice;
    cout << "How much are the options?\n" << "$";
    cin >> options;
    cout << "Include a V8?\n";
    cin >> selection;

    lowerSelection = tolower(selection);

    if (lowerSelection != 'y' && lowerSelection != 'n') {
        do {
            cout << "Bad input. Please use Y for Yes or N for No\n";
            cin >> selection;
            lowerSelection = tolower(selection);
        } while (lowerSelection != 'y' && lowerSelection != 'n');
    }

    if (lowerSelection == 'y') {
        cout << "How much is the V8?\n" << "$";
        cin >> v8Price;
        options = options + v8Price;
    }

    cout << "What region are you in?\n";
    cin >> region;

    if (region == 1) {
        salesTax = 6.5;
    }
    else {
        salesTax = 7.0;
    }

    subTotal = basePrice + options;
    taxedAmount = (salesTax / 100) * subTotal;
    totalPrice = subTotal + taxedAmount;

    cout << "\nThe total price is: $" << totalPrice << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

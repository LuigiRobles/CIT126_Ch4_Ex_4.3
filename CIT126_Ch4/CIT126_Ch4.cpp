// CIT-126 Adv. C++ by Luigi Robles
// 09/06/2020 Fall Term
// Ch.4 Pg.192 Example 4.3

#include <iostream>
#include <iomanip> 
using namespace std;

//declare and initialize  named constant
const double INTEREST_RATE = 0.015;

int main()
{
    //declare and initialize variables
    double creditCardBalance;
    double payment;
    double balance;
    double penalty = 0.0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 12: Enter credit card balance: ";
    cin >> creditCardBalance; //user input for creditCardBalance
    cout << endl;

    cout << "Line 15: Enter the payment: ";
    cin >> payment; //user input for payment amount
    cout << endl;

    balance = creditCardBalance - payment; //calculate balance

    if (balance > 0)
        penalty = balance * INTEREST_RATE; //apply penalty on balances over zero

    //output balance and penalty amount
    cout << "Line 21: The balance is: $" << balance
        << endl;
    cout << "Line 22: The penalty to be added to your "
        << "next month bill is: $" << penalty << endl;

    return 0;
} // end of main function
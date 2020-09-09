// CIT-126 Adv. C++ by Luigi Robles
// 09/06/2020 Fall Term
// Ch.4 Pg.195 Example 4.7

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
    //declare variables
    double wages, rate, hours; 

    cout << fixed << showpoint << setprecision(2);
    cout << "Line 8: Enter working hours and rate: ";
    cin >> hours >> rate; //user input for working hours and rate

    if (hours > 40.0)
        wages = 40.0 * rate +
        1.5 * rate * (hours - 40.0); //calculate overtime pay rate
    else
        wages = hours * rate;

    cout << endl;
    cout << "Line 15: The wages are $" << wages << endl; //display wages for hours worked

    return 0;
} //end of main function
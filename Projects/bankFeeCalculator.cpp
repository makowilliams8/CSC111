//Name: Mako Williams
//Date: 9/19/2024
//Purpose: Calculate the fees charged based on the number of checks needed and
//          the starting balance.

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double starting_balance;
    int num_checks;
    double check_fee;
    double low_balance_fee;
    double total_fees;
    double new_balance;

    cout << fixed << setprecision(2);

    cout << "Please enter the starting balance: ";
    cin >> starting_balance;
    cout << "Please enter the number of checks: ";
    cin >> num_checks;

    //Determine if low balance fee is added 
    if (starting_balance < 200) {
        low_balance_fee = 10;
    } else {
        low_balance_fee = 0;
    }

    //Determine which fee is added based on the number of checks
    if (num_checks < 5) {
        check_fee = num_checks * 0.15;
    } else if (num_checks <= 10) {
        check_fee = num_checks * 0.09;
    } else if (num_checks <= 19) {
        check_fee = num_checks * 0.07;
    } else {
        check_fee = num_checks * 0.05;
    }

    total_fees = low_balance_fee + check_fee + 7;

    new_balance = starting_balance - total_fees;

    cout << "Total fees: $" << total_fees << endl;
    cout << "New balance: $" << new_balance << endl;

    return 0;
}
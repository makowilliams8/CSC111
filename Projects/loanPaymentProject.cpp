// Name: Mako Williams
// Date: 9/10/2024
// Purpose: This program is used to calculate the monthly payments
//         based on the loan amount, interest rate, and number of payments


#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double L;
    double annual_rate;
    double monthly_rate;
    int N;
    double payment;
    double total_paid;
    double interest_paid;

    cout << fixed << setprecision(2);

    cout << "Please enter the amount of the loan. \n" ;
    cin >> L;

    cout << "Please enter the interest rate. \n";
    cin >> annual_rate;
    monthly_rate = annual_rate/12;

    cout << "Please enter the number of payments. \n";
    cin >> N;

    
    payment = L * (monthly_rate/100 * pow(1 + monthly_rate/100, N)) / (pow(1 + monthly_rate/100, N) - 1);
    total_paid = payment * N;
    interest_paid = total_paid - L;

    cout << "Loan amount: " << L << endl;
    cout << "Monthly Interest Rate: " << monthly_rate << "%" << endl;
    cout << "Number of Payments: " << N << endl;
    cout << "Monthly Payments: $" << payment << endl;
    cout << "Amount Paid Back : $" << total_paid << endl;
    cout << "Interest Paid: $" << interest_paid  << endl;

    return 0;
}

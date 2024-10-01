#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Please enter a number between 10 and 25: ";
    cin >> num;

    while (num < 10 || num > 25) {
        cout << "Error! Enter a number between 10 and 25: ";
        cin >> num;
    }
    
    cout << "Thanks!" << endl;

    return 0;
}
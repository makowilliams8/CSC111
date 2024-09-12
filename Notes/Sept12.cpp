
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
//syntax for if statements
    int x;
    if (x == 0)
        cout << "ZERO VALUE";   
    else if (x > 0)
        cout << "POSITIVE VALUE";
    else 
        cout << "NEGATIVE VALUE";
    

    int grade = x;

    //produces one outcome
    if (x>= 90)
        cout << "A";
    else if (x >= 80)
        cout << "B";

    // vs

    //procuces two outcomes
    if (x>= 90)
        cout << "A";
    if (x >= 80)
        cout << "B";

    return 0;
}
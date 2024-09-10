#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    int pizza_slice;
    double pizza_price;
    int soda;
    double soda_price;
    double total_price;
    
    cout << fixed << setprecision(2);

    cout << "Please enter the number of slices you'd like to purchase ";
    cin >> pizza_slice;

    cout << "Please enter the cost of a slice ";
    cin >> pizza_price;

    cout << "Please enter the number of sodas you'd like to purchase ";
    cin >> soda;

    cout << "Please enter the cost of a soda ";
    cin >> soda_price;
    
    total_price = pizza_slice*pizza_price + soda*soda_price;
    
    cout << total_price;
    
    return 0;
}
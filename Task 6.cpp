#include <iostream>
using namespace std;
int main()
{
    float total, discount = 0;

    cout << "Enter total amount: ";
    cin >> total;
    if (total >= 100 && total <= 500)
        discount = total * 0.10;
        
    else if (total > 500)
        discount = total * 0.20;

    cout << "Discount: $" << discount;
    cout << "\nFinal Amount: $" << total - discount;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int category, item, quantity;
    float price = 0, total, discount = 0, finalAmount;
    cout << "Select Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cin >> category;
    switch (category)
    {
        case 1:
            cout << "Electronics Items:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cin >> item;
            if (item == 1) price = 1000;
            else if (item == 2) price = 700;
            else if (item == 3) price = 150;
            break;
        case 2:
            cout << "Clothing Items:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cin >> item;
            if (item == 1) price = 120;
            else if (item == 2) price = 40;
            else if (item == 3) price = 60;
            break;
        case 3:
            cout << "Groceries Items:\n";
            cout << "1. Milk ($2)\n";
            cout << "2. Bread ($3)\n";
            cout << "3. Eggs ($5)\n";
            cin >> item;
            if (item == 1) price = 2;
            else if (item == 2) price = 3;
            else if (item == 3) price = 5;
            break;
        default:
            cout << "Invalid Category";
            return 0;
    }
    cout << "Enter Quantity: ";
    cin >> quantity;
    total = price * quantity;
    if (total >= 100 && total <= 500)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.20;
    finalAmount = total - discount;
    cout << "\n------ INVOICE ------\n";
    cout << "Total Price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << finalAmount << endl;
    return 0;
}
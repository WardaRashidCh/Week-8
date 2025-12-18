#include <iostream>
using namespace std;
int main()
{
    int choice;
    float usd, result;
    cout << "Enter amount in USD: ";
    cin >> usd;
    cout << "Choose conversion option:\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euro\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            result = usd * 280;
            cout << "Amount in PKR: " << result;
            break;
        case 2:
            result = usd * 83;    
            cout << "Amount in INR: " << result;
            break;
        case 3:
            result = usd * 0.92;  
            cout << "Amount in Euro: " << result;
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Select a shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            float circleArea = 3.1416 * radius * radius;
            cout << "Area of Circle = " << circleArea;
            break;
        }
        case 2: {
            float length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            float rectArea = length * width;
            cout << "Area of Rectangle = " << rectArea;
            break;
        }
        case 3:{
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            float triArea = 0.5 * base * height;
            cout << "Area of Triangle = " << triArea;
            break;
        }
        default:
            cout << "Error: Invalid choice! Please select between 1 and 3.";
    }
    return 0;
}
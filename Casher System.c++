#include<iostream>
using namespace std;

/*Prices of Products    Products will always be $ = constant*/ 
const double MILK_PRICE = 2.5;
const double CREAM_PRICE = 3.0;
const double BUTTER_PRICE = 4.5;
const double YOGURT_PRICE = 1.5;
const double CHEESE_PRICE = 5.0;

void x() {  // Create a function i call it x
    cout << "\nAvailable Products:\n";
    cout << "1. Milk ($" << MILK_PRICE << ")\n";
    cout << "2. Cream ($" << CREAM_PRICE << ")\n";
    cout << "3. Butter ($" << BUTTER_PRICE << ")\n";
    cout << "4. Yogurt ($" << YOGURT_PRICE << ")\n";
    cout << "5. Cheese ($" << CHEESE_PRICE << ")\n";
    cout << "0. Finish and calculate total\n";
}

int main() {
    int choice;
    int quantity;
    double total = 0.0;

    cout << "Welcome to the Cashier System!";

    while (true) {
        x();   // call the function
        cout << "\nEnter the number of the product you want to buy (or 0 to finish): ";
        cin >> choice;

        if (choice == 0) {          //	Returns  0 
            break; 
        }
        if (choice < 1 || choice > 5) {          //	Returns True if one of the statements is true
            cout << "Invalid choice. Please try again.\n";
            continue;
        }
        cout << "Enter the quantity: ";
        cin >> quantity;

        if (quantity <= 0) {
            cout << "Invalid quantity. Please try again.\n";
            continue;
        }
        switch (choice) {
            case 1:
                total += quantity * MILK_PRICE;   //total=total+quality*Product
                cout << quantity << " Milk added to the cart.\n";
                break;
            case 2:
                total += quantity * CREAM_PRICE;   //total=total+quality*Product
                cout << quantity << " Cream added to the cart.\n";
                break;
            case 3:
                total += quantity * BUTTER_PRICE;   //total=total+quality*Product
                cout << quantity << " Butter added to the cart.\n";
                break;
            case 4:
                total += quantity * YOGURT_PRICE;    //total=total+quality*Product
                cout << quantity << " Yogurt added to the cart.\n";
                break;
            case 5:
                total += quantity * CHEESE_PRICE;    //total=total+quality*Product
                cout << quantity << " Cheese added to the cart.\n";
                break;
            default:
                cout << "Something went wrong.\n";
                break;
        }
    }

    cout << "\nYour total is: $" << total << "\n";
    cout << "Thank you for shopping!\n";

    return 0;
}

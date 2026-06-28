#include <bits/stdc++.h>

using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    vector<Item> inventory;
    int choice;

    cout << "--- Inventory Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add New Item" << endl;
        cout << "2. Display Inventory Stock" << endl;
        cout << "3. Update Item Quantity" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                Item item;
                cout << "Enter Item ID: ";
                cin >> item.id;
                cin.ignore();
                cout << "Enter Item Name: ";
                getline(cin, item.name);
                cout << "Enter Quantity: ";
                cin >> item.quantity;
                cout << "Enter Price per Unit: $";
                cin >> item.price;

                inventory.push_back(item);
                cout << "Item added to inventory successfully!" << endl;
                break;
            }
            case 2: {
                if (inventory.empty()) {
                    cout << "Inventory is currently empty." << endl;
                } else {
                    cout << "------------------------------------------------------------------" << endl;
                    cout << left << setw(10) << "Item ID" << setw(25) << "Item Name" << setw(15) << "Quantity" << setw(12) << "Price" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    for (int i = 0; i < inventory.size(); i++) {
                        cout << left << setw(10) << inventory[i].id 
                             << setw(25) << inventory[i].name 
                             << setw(15) << inventory[i].quantity 
                             << "$" << fixed << setprecision(2) << setw(11) << inventory[i].price << endl;
                    }
                    cout << "------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (inventory.empty()) {
                    cout << "No items available to update." << endl;
                } else {
                    int searchId, newQty;
                    bool found = false;
                    cout << "Enter Item ID to update stock: ";
                    cin >> searchId;

                    for (int i = 0; i < inventory.size(); i++) {
                        if (inventory[i].id == searchId) {
                            cout << "Current stock for '" << inventory[i].name << "' is: " << inventory[i].quantity << endl;
                            cout << "Enter new total quantity: ";
                            cin >> newQty;
                            
                            if (newQty >= 0) {
                                inventory[i].quantity = newQty;
                                cout << "Stock updated successfully!" << endl;
                            } else {
                                cout << "Invalid quantity! Stock cannot be negative." << endl;
                            }
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Item with ID " << searchId << " not found in inventory." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
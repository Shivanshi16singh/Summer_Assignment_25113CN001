#include <bits/stdc++.h>

using namespace std;

struct Ticket {
    int bookingId;
    string customerName;
    int seatsBooked;
    double totalCost;
};

int main() {
    vector<Ticket> bookings;
    int choice;
    int nextId = 101;
    int totalCapacity = 50;
    double pricePerTicket = 12.50;

    cout << "--- Ticket Booking System ---" << endl;

    do {
        cout << endl;
        cout << "1. Book Tickets" << endl;
        cout << "2. View Booking Records" << endl;
        cout << "3. Check Seat Availability" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                int requestedSeats;
                cout << "Available seats: " << totalCapacity << endl;
                cout << "Enter number of tickets to book: ";
                cin >> requestedSeats;

                if (requestedSeats <= 0) {
                    cout << "Invalid number of seats!" << endl;
                } else if (requestedSeats > totalCapacity) {
                    cout << "Not enough seats available!" << endl;
                } else {
                    Ticket t;
                    t.bookingId = nextId++;
                    cin.ignore();
                    cout << "Enter Customer Name: ";
                    getline(cin, t.customerName);
                    t.seatsBooked = requestedSeats;
                    t.totalCost = requestedSeats * pricePerTicket;

                    totalCapacity -= requestedSeats;
                    bookings.push_back(t);

                    cout << endl << "Booking Successful!" << endl;
                    cout << "Booking ID:   " << t.bookingId << endl;
                    cout << "Total Cost:   $" << fixed << setprecision(2) << t.totalCost << endl;
                }
                break;
            }
            case 2: {
                if (bookings.empty()) {
                    cout << "No bookings found." << endl;
                } else {
                    cout << "------------------------------------------------------------------" << endl;
                    cout << left << setw(12) << "Booking ID" << setw(25) << "Customer Name" << setw(15) << "Seats Booked" << setw(12) << "Total Cost" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    for (int i = 0; i < bookings.size(); i++) {
                        cout << left << setw(12) << bookings[i].bookingId 
                             << setw(25) << bookings[i].customerName 
                             << setw(15) << bookings[i].seatsBooked 
                             << "$" << fixed << setprecision(2) << setw(11) << bookings[i].totalCost << endl;
                    }
                    cout << "------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3:
                cout << "Current Seat Availability Status:" << endl;
                cout << "Total Seats Available: " << totalCapacity << " / 50" << endl;
                break;

            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
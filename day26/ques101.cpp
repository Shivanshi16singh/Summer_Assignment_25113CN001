#include <bits/stdc++.h>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl << endl;

    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl << endl;
        } else {
            cout << endl << "Congratulations! You guessed the correct number!" << endl;
            cout << "Total attempts: " << attempts << endl;
        }
    }

    return 0;
}
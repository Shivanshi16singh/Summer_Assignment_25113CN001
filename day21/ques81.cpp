#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: "<< endl;;

    getline(cin, str); 

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    cout << "The length of the entered string is: " << length << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Variables to store sex and height
    char sex;
    double height;

    // User input for sex and height
    cout << "Enter the person's sex (M/F): ";
    cin >> sex;
    cout << "Enter the person's height in meters: ";
    cin >> height;

    // Determine the description based on sex and height
    if (sex == 'M') {
        if (height < 1.70) {
            cout << "Short" << endl;
        } else if (height >= 1.70 && height < 1.85) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else if (sex == 'F') {
        if (height < 1.60) {
            cout << "Short" << endl;
        } else if (height >= 1.60 && height < 1.75) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else {
        cout << "Invalid input for sex. Please enter M or F." << endl;
    }

    return 0;
}

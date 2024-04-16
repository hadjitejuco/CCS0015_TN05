#include <iostream>
using namespace std;

int main() {
    int a[100]; // Array to hold up to 100 integers
    int n, lar;

    cout << "Enter the number of elements (n): ";
    cin >> n;

    // Check to ensure the number of elements does not exceed the array capacity
    if (n > 100) {
        cout << "Error: Only up to 100 elements are supported.";
        return 1; // Exit the program with an error code
    }

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input each number into the array
    }

    // Assuming the first element is the largest
    lar = a[0];
    cout << "Entered numbers are: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Finding the largest number
    for (int i = 1; i < n; i++) {
        cout << "Comparing " << lar << " and " << a[i] << endl; // Showing the comparison
        if (lar < a[i]) {
            lar = a[i]; // Update the largest number
            cout << "New largest found: " << lar << endl;
        }
    }

    cout << "Largest number: " << lar << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int a;

    // Ask for array size
    cout << "Enter array size: ";
    cin >> a;

    // Declare array
    int arr[a];

    // -------------------------------
    // INPUT ARRAY ELEMENTS
    // -------------------------------
    for (int i = 0; i < a; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    int n;

    // Ask for the number to search
    cout << "Enter number to search: ";
    cin >> n;

    // Flag variable to check if found
    bool flag = false;

    // -------------------------------
    // SEARCHING (LINEAR SEARCH)
    // -------------------------------
    for (int i = 0; i < a; i++) {

        // If element matches
        if (arr[i] == n) {
            flag = true;   // Mark as found
            break;         // Stop searching
        }
    }

    // -------------------------------
    // OUTPUT RESULT
    // -------------------------------
    if (flag)
        cout << "Found (ok)";
    else
        cout << "Not found (no)";

    return 0;
}
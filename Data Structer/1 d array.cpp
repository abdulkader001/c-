#include <iostream>
using namespace std;

int main() {

    // Variable to store array size
    int a;

    // Variable to store sum
    int sum = 0;

    // Ask user for array size
    cout << "Enter array size: ";
    cin >> a;

    // Declare array (better to use dynamic allocation in standard C++)
    int arr[a];

    // -------------------------------
    // INPUT ARRAY ELEMENTS
    // -------------------------------
    for (int i = 0; i < a; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    // -------------------------------
    // 1. SUM OF ALL ELEMENTS
    // -------------------------------
    /*
    for (int i = 0; i < a; i++) {
        sum += arr[i];   // Add each element to sum
    }
    */

    // -------------------------------
    // 2. DIVISION OF ELEMENTS (NOT COMMON USE)
    // -------------------------------
    /*
    sum = arr[0];  // Start from first element
    for (int i = 1; i < a; i++) {
        sum /= arr[i];  // Divide sequentially
    }
    */

    // -------------------------------
    // 3. SUBTRACTION OF ELEMENTS
    // -------------------------------
    /*
    sum = arr[0];  // Start from first element
    for (int i = 1; i < a; i++) {
        sum -= arr[i];
    }
    */

    // -------------------------------
    // 4. MULTIPLICATION OF ELEMENTS
    // -------------------------------
    /*
    sum = 1;  // Start from 1 for multiplication
    for (int i = 0; i < a; i++) {
        sum *= arr[i];
    }
    */

    // -------------------------------
    // 5. SUM OF EVEN NUMBERS
    // -------------------------------
    /*
    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {   // Check even
            sum += arr[i];
        }
    }
    */

    // -------------------------------
    // 6. SUM OF ODD NUMBERS
    // -------------------------------
    /*
    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 != 0) {   // Check odd
            sum += arr[i];
        }
    }
    */

    // -------------------------------
    // 7. COUNT ZERO ELEMENTS
    // -------------------------------
    /*
    int count = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] == 0) {
            count++;   // Increase counter
        }
    }
    cout << "Number of zeros: " << count << endl;
    */

    // -------------------------------
    // 8. FIND MINIMUM VALUE
    // -------------------------------
    /*
    int min = arr[0];   // Assume first element is smallest
    for (int i = 1; i < a; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum value: " << min << endl;
    */

    // -------------------------------
    // 9. FIND MAXIMUM VALUE
    // -------------------------------
    /*
    int max = arr[0];   // Assume first element is largest
    for (int i = 1; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum value: " << max << endl;
    */

    // Final output (based on which block you enable)
    cout << "Result: " << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    // Variables for rows and columns
    int row, col;

    // Ask user for size of 2D array
    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    // Declare 2D array
    int arr[row][col];

    // -------------------------------
    // INPUT ELEMENTS
    // -------------------------------
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Variable for result
    int sum = 0;

    // -------------------------------
    // 1. SUM OF ALL ELEMENTS
    // -------------------------------
    /*
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];   // Add each element
        }
    }
    */

    // -------------------------------
    // 2. SUM OF EVEN NUMBERS
    // -------------------------------
    /*
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] % 2 == 0) {
                sum += arr[i][j];
            }
        }
    }
    */

    // -------------------------------
    // 3. SUM OF ODD NUMBERS
    // -------------------------------
    /*
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] % 2 != 0) {
                sum += arr[i][j];
            }
        }
    }
    */

    // -------------------------------
    // 4. COUNT ZERO ELEMENTS
    // -------------------------------
    /*
    int count = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
    cout << "Number of zeros: " << count << endl;
    */

    // -------------------------------
    // 5. FIND MIN VALUE
    // -------------------------------
    /*
    int min = arr[0][0];   // Assume first element is smallest
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum value: " << min << endl;
    */

    // -------------------------------
    // 6. FIND MAX VALUE
    // -------------------------------
    /*
    int max = arr[0][0];   // Assume first element is largest
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    cout << "Maximum value: " << max << endl;
    */

    // -------------------------------
    // DISPLAY MATRIX
    // -------------------------------
    cout << "\nMatrix is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Final result (depends on which block you enable)
    cout << "Result: " << sum << endl;

    return 0;
}
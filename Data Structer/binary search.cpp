#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2; // middle index
        if (arr[mid] == x) {
            found = true;
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if (arr[mid] < x) {
            low = mid + 1; // move to right half
        }
        else {
            high = mid - 1; // move to left half
        }
    }

    if (!found) {
        cout << "Element not found in the array.\n";
    }

    return 0;
}

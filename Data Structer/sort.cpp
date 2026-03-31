#include <iostream>
using namespace std;

int main() {
    int n;
    int min =0;

    // -------------------------------
    // 1. Input array size
    // -------------------------------
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // -------------------------------
    // 2. Input array elements
    // -------------------------------
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    //selection
/*for (int i=0;i<n;i++){
    min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[min]){
            min=j;
        }
    }
    swap(arr[i],arr[min]);
}*/

//insertion  
/*
for (int i=1;i<n;i++){
    int key =i;
    for(int j=i-1;j>0;j--){
        if (arr[j]>key)
        swap(arr[j],arr[j+1]);
        else
        break;  
    }

    }     */
//bubble 
/*
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
*/
    // -------------------------------
    // 4. Print sorted array
    // -------------------------------
    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

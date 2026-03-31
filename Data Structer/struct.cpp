#include <iostream>
#include <string>   // For string and getline
using namespace std;

// Structure to store student information
struct stu {
    string id;     // Student ID
    string name;   // Student Name
    int age;       // Student Age
    double cgpa;   // Student CGPA
};

int main() {

    int n;

    // Ask user how many students
    cout << "How many students? ";
    cin >> n;

    // Declare array of structures
    stu arr[n];

    // -------------------------------
    // INPUT STUDENT DATA
    // -------------------------------
    for (int i = 0; i < n; i++) {

        cout << "\nEntering details for student " << i + 1 << ":" << endl;

        // Input ID
        cout << "Enter ID: ";
        cin >> arr[i].id;

        // Clear input buffer before getline
        cin.ignore();

        // Input full name (including spaces)
        cout << "Enter Name: ";
        getline(cin, arr[i].name);

        // Input age
        cout << "Enter Age: ";
        cin >> arr[i].age;

        // Input CGPA
        cout << "Enter CGPA: ";
        cin >> arr[i].cgpa;
    }

    // -------------------------------
    // DISPLAY STUDENT DATA
    // -------------------------------
    cout << "\n--- Student Records ---" << endl;

    for (int i = 0; i < n; i++) {

        cout << "Student " << i + 1 << " -> ";

        cout << "ID: " << arr[i].id
             << ", Name: " << arr[i].name
             << ", Age: " << arr[i].age
             << ", CGPA: " << arr[i].cgpa
             << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
#include <limits>
using namespace std;

/* -------------------------------
   1. Simple Pointer Example
   ------------------------------- */
void simplePointerExample() {
    cout << "\n--- 1. Simple Pointer Example ---\n";

    int x = 10;      // normal integer
    int *ptr = &x;   // pointer stores address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 50; // modify x using pointer
    cout << "New value of x (after *ptr=50): " << x << endl;
}

/* -------------------------------
   2. Pointer with Array
   ------------------------------- */
void pointerWithArray() {
    cout << "\n--- 2. Pointer with Array ---\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // pointer to first element

    cout << "Accessing array using *(ptr + i):\n";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << "\n";

    cout << "Accessing array using ptr[i]:\n";
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << "\n";

    // Modify array using pointer
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }

    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

/* -------------------------------
   3. Pointer inside Struct
   ------------------------------- */
struct Student {
    string id;
    string name;
    int age;
    double cgpa;
    int *marks; // pointer inside struct
};

void pointerInStruct() {
    cout << "\n--- 3. Pointer inside Struct ---\n";

    Student s;
    s.id = "S101";
    s.name = "Abdul Kader";
    s.age = 22;
    s.cgpa = 3.85;

    int m = 95;       // normal variable
    s.marks = &m;     // pointer stores address of marks

    cout << "Student Info:\n";
    cout << "ID: " << s.id << ", Name: " << s.name << ", Age: " << s.age 
         << ", CGPA: " << s.cgpa << ", Marks: " << *s.marks << endl;
}

/* -------------------------------
   4. Pointer to Struct
   ------------------------------- */
void pointerToStruct() {
    cout << "\n--- 4. Pointer to Struct ---\n";

    Student s;
    s.id = "S102";
    s.name = "Fatima";
    s.age = 21;
    s.cgpa = 3.92;

    Student *ptr = &s; // pointer to struct

    cout << "Access using pointer to struct:\n";
    cout << "ID: " << ptr->id << ", Name: " << ptr->name 
         << ", Age: " << ptr->age << ", CGPA: " << ptr->cgpa << endl;
}

/* -------------------------------
   5. Pointer with Dynamic Memory
   ------------------------------- */
void pointerWithDynamicMemory() {
    cout << "\n--- 5. Pointer with Dynamic Memory ---\n";

    int *ptr = new int; // dynamically allocate memory
    *ptr = 100;

    cout << "Value at dynamically allocated memory: " << *ptr << endl;

    delete ptr; // free memory
    cout << "Memory freed.\n";
}

/* -------------------------------
   MAIN FUNCTION
   ------------------------------- */
int main() {

    simplePointerExample();       // 1. Simple Pointer
    pointerWithArray();           // 2. Pointer + Array
    pointerInStruct();            // 3. Pointer inside Struct
    pointerToStruct();            // 4. Pointer to Struct
    pointerWithDynamicMemory();   // 5. Pointer + Dynamic Memory

    return 0;
}
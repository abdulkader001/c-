#include <iostream>
using namespace std;

#define MAX 100  // maximum size of stack

int main() {
    int stack[MAX]; // array to store stack elements
    int top = -1;   // index of top element (-1 means empty)
    int choice, value;

    do {
        // Menu for stack operations
        cout << "\n--- Stack Operations ---\n";
        cout << "1. Push\n2. Pop\n3. Peek/Top\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Push operation
                if(top == MAX - 1) {
                    cout << "Stack Overflow! Cannot push more elements.\n";
                } else {
                    cout << "Enter value to push: ";
                    cin >> value;
                    top++;           // move top up
                    stack[top] = value; // insert element
                    cout << value << " pushed into stack.\n";
                }
                break;

            case 2: // Pop operation
                if(top == -1) {
                    cout << "Stack Underflow! Stack is empty.\n";
                } else {
                    cout << stack[top] << " popped from stack.\n";
                    top--; // remove top element
                }
                break;

            case 3: // Peek/Top operation
                if(top == -1) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Top element: " << stack[top] << endl;
                }
                break;

            case 4: // Display stack
                if(top == -1) {
                    cout << "Stack is empty.\n";
                } else {
                    cout << "Stack elements: ";
                    for(int i = 0; i <= top; i++) {
                        cout << stack[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5: // Exit
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 5);

    return 0;
}

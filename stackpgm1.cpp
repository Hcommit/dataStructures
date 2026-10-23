#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 3

int stack[SIZE], top = -1;

void push(int ele) {
    if (top == SIZE - 1)
        cout << "Stack overflow\n";
    else
        stack[++top] = ele;
}

void pop() {
    if (top == -1)
        cout << "Stack underflow\n";
    else
        cout << "Popped ele = " << stack[top--] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack underflow (stack is empty)\n";
    } else {
        cout << "Stack elements (top to bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
    int choice, ele;

    while (true) {
        cout << "\nEnter your choice\n";
        cout << "1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n";
        if (!(cin >> choice)) {
            cout << "Invalid input\n";
            return 1;
        }

        switch (choice) {
            case 1:
                cout << "Enter element to be pushed: ";
                cin >> ele;
                push(ele);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting the program\n";
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}
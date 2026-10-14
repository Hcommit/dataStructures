#include <iostream>
using namespace std;

const int size = 5;
int stack[size];
int top = -1;
int ele;

void push() {
    if (top < size - 1) {
        cout << "Enter element to be pushed - ";
        cin >> ele;
        top++;
        stack[top] = ele;
    } else {
        cout << "Stack overflow" << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow" << endl;
    } else {
        ele = stack[top];
        cout << "Popped element - " << ele << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack - " << endl;
    for (int i = top; i >= 0; i--) {
        cout << " " << stack[i] << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n1. Push  2. Pop  3. Display  4. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}
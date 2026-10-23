//lab4


#include <iostream>
#include <cstdlib>
using namespace std;
 
const int SIZE = 3;
int q[SIZE];
int rear = -1;
int front = 0;
 
void Enqueue(int ele) {
    if (rear == SIZE - 1) {
        cout << "overflow\n";
    } else {
        q[++rear] = ele;
    }
}
 
void Deque() {
    int i;
    if (front > rear) {
        cout << "underflow\n";
    } else {
        cout << "deleted ele " << q[front] << "\n";
        for (i = 1; i <= rear; i++) {
            q[i - 1] = q[i];
        }
        rear--;
    }
}
 
void Display() {
    int i;
    if (front > rear) {
        cout << "queue is empty\n";
    } else {
        for (i = front; i <= rear; i++) {
            cout << q[i] << "\n";
        }
    }
}
 
int main() {
    int choice, ele;
    cout << " 1 - ENQUE - insert into queue\n"
         << " 2 - DEQUE - remove from queue\n"
         << " 3 - DISPLAY\n"
         << " 4 - EXIT\n\n";
    while (1) {
        cout << "Enter your choice 1 - 2 - 3 - 4: ";
        cin >> choice;
 
        switch (choice) {
            case 1:
                cout << "Enter the elements to be inserted - ";
                cin >> ele;
                Enqueue(ele);
                break;
            case 2:
                Deque();
                break;
            case 3:
                Display();
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
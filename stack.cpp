#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node *next;
};

Node *top;

void initStack() {
    top = NULL;
}

int isEmpty() {
    return top == NULL;
}

void push(int newData) {
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = top;
    top = newNode;
    cout << "Data pushed: " << newData << endl;
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    Node *temp = top;
    cout << "Data popped: " << top->data << endl;
    top = top->next;
    delete temp;
}

void displayStack() {
    Node *temp = top;
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements:" << endl;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void main() {
    int choice, data;
    initStack();
    do {
        clrscr();
        cout << " ==========================" << endl;
        cout << " =        STACK            =" << endl;
        cout << " ==========================" << endl;
        cout << " = 1. Push                =" << endl;
        cout << " = 2. Pop                 =" << endl;
        cout << " = 3. Display             =" << endl;
        cout << " = 4. Exit                =" << endl;
        cout << " ==========================" << endl;
        cout << " Enter choice: "; cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data to push: "; cin >> data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                displayStack();
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice!" << endl;
        }
        getch();
    } while (choice != 4);
}

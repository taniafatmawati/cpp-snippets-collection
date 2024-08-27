#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node *next;
};

Node *front, *rear;

void initQueue() {
    front = rear = NULL;
}

int isEmpty() {
    return front == NULL;
}

void enqueue(int newData) {
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = NULL;
    if (isEmpty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Data enqueued: " << newData << endl;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    Node *temp = front;
    cout << "Data dequeued: " << front->data << endl;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    delete temp;
}

void displayQueue() {
    Node *temp = front;
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements:" << endl;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void main() {
    int choice, data;
    initQueue();
    do {
        clrscr();
        cout << " ==========================" << endl;
        cout << " =        QUEUE           =" << endl;
        cout << " ==========================" << endl;
        cout << " = 1. Enqueue             =" << endl;
        cout << " = 2. Dequeue             =" << endl;
        cout << " = 3. Display             =" << endl;
        cout << " = 4. Exit                =" << endl;
        cout << " ==========================" << endl;
        cout << " Enter choice: "; cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter data to enqueue: "; cin >> data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice!" << endl;
        }
        getch();
    } while (choice != 4);
}

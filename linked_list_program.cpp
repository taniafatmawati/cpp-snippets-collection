#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct TNode{
    int data;
    TNode *next;
};

TNode *head, *tail;

void init (){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}

void insertFront(int newData)
{
    TNode *newNode;
    newNode = new TNode;
    newNode->data = newData;
    newNode->next = NULL;
    if(isEmpty()==1)
    {
        head = tail = newNode;
        tail->next = NULL;
    }else
    {
        newNode->next = head;
        head = newNode;
    }
    cout << "Data inserted\n";
}

void display(){
    TNode *temp;
    temp = head;
    if(isEmpty()==0)
    {
        while(temp!=NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }else cout << "List is empty\n";
}

void deleteFront()
{
    TNode *deleteNode;
    int d;
    if (isEmpty()==0)
    {
        if(head!=tail)
        {
            deleteNode = head;
            d = deleteNode->data;
            head = head->next;
            delete deleteNode;
        }else
        {
            d = tail->data;
            head = tail = NULL;
        }
        cout << d << " deleted";
    }else cout << "List is empty\n";
}

void clear()
{
    TNode *temp, *deleteNode;
    temp = head;
    while(temp!=NULL)
    {
        deleteNode = temp;
        temp = temp->next;
        delete deleteNode;
    }
    head = NULL;
    printf("List cleared");
}

int main()
{
    int choice, newData;
    do
    {
        system("cls");
        cout << endl;
        cout << " ============================" << endl;
        cout << " =   LINKED LIST PROGRAM     =" << endl;
        cout << " ============================" << endl;
        cout << " = 1. Insert Front          =" << endl;
        cout << " = 2. Delete Front          =" << endl;
        cout << " = 3. Display Data          =" << endl;
        cout << " = 4. Clear                 =" << endl;
        cout << " = 5. Exit                  =" << endl;
        cout << " ============================" << endl;
        cout << " Enter Choice: "; cin >> choice;
        switch (choice)
        {
            case 1: system("cls");{
                cout << "Enter Data = "; cin >> newData;
                insertFront(newData);
                break;
            }
            case 2: system("cls");{
                deleteFront();
                break;
            }
            case 3: system("cls");{
                display();
                break;
            }
            case 4: system("cls");{
                clear();
                break;
            }
            case 5: system("cls");{
                return 0;
                break;
            }
            default : system("cls");
            {
                cout << "\n Sorry, the choice you made is not available!";
            }
        }
        getch();
    }
    while (choice != 5);
}

#include <iostream>
#include <cstring>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

// Function to perform Bubble Sort on numeric data (ascending)
void bubbleSortAscending(int n, int arr[20]) {
    int temp, check;
    for (int i = 0; i < n-1; i++) {
        check = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                check += 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }                
        if (check == 0) break;
        cout << "\n Iteration " << (i+1) << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << "  ";
        }
    }
}

// Function to perform Bubble Sort on numeric data (descending)
void bubbleSortDescending(int n, int arr[20]) {
    int temp, check;
    for (int i = 0; i < n-1; i++) {
        check = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                check += 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }                     
        if (check == 0) break;
        cout << "\n Iteration " << (i+1) << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << "  ";
        }
    }
}

// Function to perform Bubble Sort on string data (ascending)
void bubbleSortAscending(int n, char arr[20][10]) {
    char temp[1][10];
    int a, check;
    for (int i = 0; i < n-1; i++) {
        check = 0;
        for (int j = 0; j < n-i-1; j++) {
            a = 0;
            for (int k = 0; k < strlen(arr[j]); k++){
                if (arr[j][k] > arr[j+1][k]) {
                    a = 1;
                    goto continue_loop;
                } else if (arr[j][k] == arr[j+1][k]) {
                    continue;
                } else if (arr[j][k] < arr[j+1][k]) {
                    break;
                }
            }
            continue_loop:
            if (a == 1) {
                check += 1;
                for (int k = 0; k < 10; k++){
                    temp[0][k] = arr[j][k];
                    arr[j][k] = arr[j+1][k];
                    arr[j+1][k] = temp[0][k];
                }
            }
        }                
        if (check == 0) break;
        cout << "\n Iteration " << (i+1) << " : " << endl;
        for (int l = 0; l < n; l++) {
            cout << " ";
            for (int k = 0; k < strlen(arr[l]); k++) {
                cout << arr[l][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}

// Function to perform Bubble Sort on string data (descending)
void bubbleSortDescending(int n, char arr[20][10]) {
    char temp[1][10];
    int a, check;
    for (int i = 0; i < n-1; i++) {
        check = 0;
        for (int j = 0; j < n-i-1; j++) {
            a = 0;
            for (int k = 0; k < strlen(arr[j]); k++){
                if (arr[j][k] < arr[j+1][k]) {
                    a = 1;
                    goto continue_loop;
                } else if (arr[j][k] == arr[j+1][k]) {
                    continue;
                } else if (arr[j][k] > arr[j+1][k]) {
                    break;
                }
            }
            continue_loop:
            if (a == 1) {
                check += 1;
                for (int k = 0; k < 10; k++){
                    temp[0][k] = arr[j][k];
                    arr[j][k] = arr[j+1][k];
                    arr[j+1][k] = temp[0][k];
                }
            }
        }                
        if (check == 0) break;
        cout << "\n Iteration " << (i+1) << " : " << endl;
        for (int l = 0; l < n; l++) {
            cout << " ";
            for (int k = 0; k < strlen(arr[l]); k++) {
                cout << arr[l][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    int choice, n, sort_choice;
    cout << "\n Choose data type (1: Numeric, 2: String) = "; cin >> choice;

    if (choice == 1) {
        // Sorting for numeric data
        cout << "\n Enter the number of numeric data: "; cin >> n;

        int numArr[20];
        cout << " Enter numeric data elements: " << endl;
        for (int i = 0; i < n; i++) {
            cout << " Data " << (i+1) << " = "; cin >> numArr[i];
        }

        cout << "\n\n Choose sorting type (1: Ascending, 2: Descending): "; cin >> sort_choice;

        cout << "\n Initial data: ";
        for (int i = 0; i < n; i++) {
            cout << numArr[i] << "  ";
        }
        cout << endl;

        if (sort_choice == 1) {
            bubbleSortAscending(n, numArr);
            cout << "\n\n Final data\t: ";
            for (int i = 0; i < n; i++)
                cout << numArr[i] << "  ";
            cout << endl;
        } else if (sort_choice == 2) {
            bubbleSortDescending(n, numArr);
            cout << "\n\n Final data\t: ";
            for (int i = 0; i < n; i++)
                cout << numArr[i] << "  ";
            cout << endl;
        } else {
            cout << "Invalid input. Please enter a number between 1 and 2." << endl;
        }
    } else if (choice == 2) {
        // Sorting for string data
        cout << "\n Enter the number of string data: "; cin >> n;

        char stringArr[20][10], dummy[1][10];
        cout << " Enter string data elements: " << endl;
        cin.getline(dummy[0], 10);
        for (int i = 0; i < n; i++) {
            cout << " Data " << (i+1) << " = ";
            cin.getline(stringArr[i], 10);
        }

        cout << "\n\n Choose sorting type (1: Ascending, 2: Descending): "; cin >> sort_choice;

        cout << "\n Initial data: " << endl;
        for (int i = 0; i < n; i++) {
            cout << " ";
            for (int k = 0; k < strlen(stringArr[i]); k++) {
                cout << stringArr[i][k];
            }
            cout << endl;
        }
        cout << endl;

        if (sort_choice == 1) {
            bubbleSortAscending(n, stringArr);
            cout << "\n\n Final data\t: " << endl;
            for (int i = 0; i < n; i++) {
                cout << " ";
                for (int k = 0; k < strlen(stringArr[i]); k++) {
                    cout << stringArr[i][k];
                }
                cout << endl;
            }
            cout << endl;
        } else if (sort_choice == 2) {
            bubbleSortDescending(n, stringArr);
            cout << "\n\n Final data\t: " << endl;
            for (int i = 0; i < n; i++) {
                cout << " ";
                for (int k = 0; k < strlen(stringArr[i]); k++) {
                    cout << stringArr[i][k];
                }
                cout << endl;
            }
            cout << endl;
        } else {
            cout << "Invalid input. Please enter a number between 1 and 2." << endl;
        }
    } else {
        cout << "Invalid input. Please enter a number between 1 and 2." << endl;
    }
    getch();
}

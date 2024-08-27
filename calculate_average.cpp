#include <iostream.h>
#include <conio.h>

void main() {
    int i, j, n;
    float sum, average;
    float x[100];
    
    cout << "Number of Data X: "; cin >> n;
    cout << "Enter Data:" << endl;
    
    for (i = 0; i < n; i++) {
        cout << "Data " << (i + 1) << ": ";
        cin >> x[i];
    }
    
    j = sizeof(x) / sizeof(float); // number according to array definition = 100
    cout << "Total Data: " << j << endl;
    cout << "Data: ";
    
    sum = 0;
    for (i = 0; i < n; i++) {
        cout << x[i] << " ";
        sum = sum + x[i];
    }
    
    cout << endl;
    average = sum / n;
    cout << "Average = " << average << endl;
    cout << endl;
    
    getch();
}

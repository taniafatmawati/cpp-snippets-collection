#include <iostream.h>
#include <conio.h>

void main() {
    int i, n;
    float min, max;
    float x[100];
    
    cout << "Number of Data X: "; cin >> n;
    cout << "Enter Data:" << endl;
    
    for (i = 0; i < n; i++) {
        cout << "Data " << (i + 1) << ": ";
        cin >> x[i];
    }
    
    min = x[0];
    max = x[0];
    
    for (i = 1; i < n; i++) {
        if (min > x[i]) min = x[i];
        if (max < x[i]) max = x[i];
    }
    
    cout << "Smallest Data Value = " << min << endl;
    cout << "Largest Data Value = " << max << endl;
    cout << endl;
    
    getch();
}

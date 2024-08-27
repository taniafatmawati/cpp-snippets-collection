#include <iostream.h>
#include <conio.h>

void main() {
    cout << endl << " ================== n-th Term of Fibonacci Sequence ================ " << endl << endl;

    int n, f_n, f_n1, f_n2;

    cout << " Fibonacci sequence with the first term (U1) = 0 and the second term (U2) = 1" << endl;
    cout << " Enter the value of n = ";
    cin >> n;
    cout << endl;

    f_n1 = 1;
    f_n2 = 0;

    if (n == 1) {
        cout << " The " << n << "-th term in the Fibonacci sequence is " << f_n2 << endl;
    } else if (n == 2) {
        cout << " The " << n << "-th term in the Fibonacci sequence is " << f_n1 << endl;
    } else {
        for (int i = 1; i <= n - 2; i++) {
            f_n = f_n1 + f_n2;
            f_n2 = f_n1;
            f_n1 = f_n;

            if (i == n - 2) {
                cout << " The " << n << "-th term in the Fibonacci sequence is " << f_n << endl;
            }
        }
    }

    getch();
}

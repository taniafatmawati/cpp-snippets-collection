#include <iostream.h>
#include <conio.h>

int main() {
    cout << endl << " ================== First n Fibonacci Numbers ================= " << endl << endl;

    int n, f_n, f_n1, f_n2;

    cout << " Fibonacci sequence with the first term (U1) = 0 and the second term (U2) = 1" << endl;
    cout << " Enter the value of n (number of terms in the Fibonacci sequence) = ";
    cin >> n;
    cout << endl << " ";

    f_n1 = 1;
    f_n2 = 0;

    cout << f_n2 << "  ";
    cout << f_n1 << "  ";

    for (int i = 1; i <= n - 2; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;

        cout << f_n << "  ";
    }

    cout << "\n";

    getch();
}

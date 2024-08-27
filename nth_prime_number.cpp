#include <iostream.h>
#include <conio.h>

void main() {
    cout << endl << " ========================= Nth Prime Number ========================= " << endl << endl;

    int n, i;

    cout << " Enter the value of n = ";
    cin >> n;
    cout << endl << " The " << n << "-th prime number is ";

    int c = 0;
    int o = 1;

    while (o <= n) {
        int x = 0;

        for (i = 1; i <= c; i++) {
            if (c % i == 0) {
                x++;
            }
        }

        if (x == 2) {
            if (o == n) {
                cout << c << " ";
                goto end;
            } else {
                o++;
            }
        }

        c++;
    }

    cout << endl;
end:
    cout << endl;

    getch();
}

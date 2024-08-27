#include <iostream.h>
#include <conio.h>

int main() {
    cout << endl << " ====================== First n Prime Numbers ===================== " << endl << endl;

    int i = 0, check, num = 2, n;

    cout << " Enter the number of prime numbers: ";
    cin >> n;
    cout << endl << " ";

    while (i < n) {
        check = 0;

        for (int j = 2; j <= num; j++) {
            if (num % j == 0) {
                check++;
            }
        }

        if (check == 1) {
            cout << num;

            if (i < n - 1) {
                cout << ",";
            } else {
                cout << ".";
            }

            i++;
        }

        num++;
    }

    getch();
}

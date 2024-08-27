#include <iostream.h>
#include <conio.h>

main() {
    int n, i;
    cout << "Displaying the n-th Prime Number" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Enter the value of n = ";
    cin >> n;

    int count = 0;
    int prime_count = 0;

    while (prime_count <= n) {
        int divisor_count = 0;
        for (i = 1; i <= count; i++) {
            if (count % i == 0) {
                divisor_count++;
            }
        }

        if (divisor_count == 2) {
            if (prime_count == n) {
                cout << count << " ";
                goto end;
            } else {
                prime_count++;
            }
        }
        count++;
    }
    cout << endl;
    end:
    cout << endl;
    cout << "Done.";
    getch();
}

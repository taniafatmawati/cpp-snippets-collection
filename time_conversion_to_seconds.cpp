#include <iostream.h>
#include <conio.h>

void main() {
    cout << " ==================================================================== " << endl;
    cout << "                Time Conversion to Seconds                          " << endl;
    cout << " ==================================================================== " << endl << endl;

    long h1, m1, s1, x1, y1, z1, total_seconds;

    cout << " Enter time in hours = ";
    cin >> h1;
    cout << " Enter time in minutes = ";
    cin >> m1;
    cout << " Enter time in seconds = ";
    cin >> s1;

    cout << endl;

    x1 = h1 * 3600;
    y1 = m1 * 60;
    z1 = s1;

    total_seconds = x1 + y1 + z1;

    cout << " The converted time to seconds is " << total_seconds << " seconds." << endl;

    getch();
}

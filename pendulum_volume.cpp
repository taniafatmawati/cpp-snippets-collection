#include <iostream.h>
#include <conio.h>
#define PI 3.14

void main() {
    cout << "           Pendulum Volume           " << endl << endl;

    float r, t, base_volume, cone_volume, total_volume;

    cout << "Enter the radius (r)       = ";
    cin >> r;
    cout << "Enter the height (t)       = ";
    cin >> t;

    base_volume = PI * r * r * t / 3;
    cone_volume = PI * r * r * r * 2 / 3;
    total_volume = base_volume + cone_volume;

    cout << "Resulting Pendulum Volume   = " << total_volume << endl << endl;

    getch();
}

#include <iostream.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

void main() {
    cout << " ===============================================" << endl;
    cout << "          Volume of Cylinder and Cone           " << endl;
    cout << " ===============================================" << endl << endl;

    float r, t, Vc, Vcone;

    cout << " Enter the radius (r) = ";
    cin >> r;
    cout << " Enter the height (t) = ";
    cin >> t;
    cout << endl;

    Vc = PI * r * r * t;
    Vcone = Vc / 3;

    cout << " The volume of the cylinder is " << Vc << endl;
    cout << " The volume of the cone is " << Vcone << endl;

    getch();
}

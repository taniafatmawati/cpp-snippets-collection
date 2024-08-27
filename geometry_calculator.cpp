#include <iostream.h>
#include <conio.h>

void main()
{
    cout << " ======================================================================= " << endl;
    cout << "        Program to Calculate Area of 2D Shapes and Volume of 3D Shapes        " << endl;
    cout << " ======================================================================= " << endl << endl;

    int choice;

    cout << " 1. Calculate the volume of a cube                          " << endl;
    cout << " 2. Calculate the area of a parallelogram                    " << endl;
    cout << " 3. Calculate the volume of a triangular prism                " << endl << endl;
    cout << " Enter your choice number: ";
    cin >> choice;

    cout << endl;

    switch (choice)
    {
        case 1:
        {
            float side, volume;

            cout << " Enter the edge length of the cube   = ";
            cin >> side;

            cout << endl;

            volume = side * side * side;

            cout << " Therefore, the volume of the cube is " << volume << "." << endl;
            break;
        }

        case 2:
        {
            float base, height, area;

            cout << " Enter the base length of the parallelogram         = ";
            cin >> base;
            cout << " Enter the height of the parallelogram              = ";
            cin >> height;

            cout << endl;

            area = base * height;

            cout << " The area of the parallelogram is " << area << endl;

            break;
        }

        case 3:
        {
            float triangle_base, triangle_height, prism_height, volume;

            cout << " Enter the height of the triangle base   = ";
            cin >> triangle_height;
            cout << " Enter the base length of the triangle   = ";
            cin >> triangle_base;
            cout << " Enter the height of the prism          = ";
            cin >> prism_height;

            cout << endl;

            volume = (triangle_base * triangle_height * prism_height) / 2;

            cout << " Therefore, the volume of the triangular prism is " << volume << "." << endl;
            break;
        }

        default:
            cout << " Not included in the provided options... " << endl;
            cout << " Please check again..." << endl;
            break;
    }

    getch();
}

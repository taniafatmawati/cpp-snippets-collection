#include <iostream.h>
#include <conio.h>
#include <math.h>

int main()
{
   float a, b, c, d, p1, p2;
   char again;
   again = 'Y';
   while ((again == 'Y') || (again == 'y')){
      clrscr();
      cout << "Calculating Roots of a Quadratic Equation" << endl;
      cout << "=========================================" << endl;
      cout << endl;
      cout << "Enter the value of a: "; cin >> a;
      cout << "Enter the value of b: "; cin >> b;
      cout << "Enter the value of c: "; cin >> c;
      d = (b * b) - (4 * a * c);
      if (d < 0){
         p1 = -b / (2 * a);
         p2 = sqrt(abs(d)) / (2 * a);
         cout << "Root X1 = " << p1 << " + " << p2 << "i" << endl;
         cout << "Root X2 = " << p1 << " - " << p2 << "i" << endl;
      } else if (d == 0){
         p1 = -b / (2 * a);
         cout << "Root X1 = X2 = " << p1 << endl;
      } else {
         p1 = (-b + sqrt(d)) / (2 * a);
         p2 = (-b - sqrt(d)) / (2 * a);
         cout << "Root X1 = " << p1 << endl;
         cout << "Root X2 = " << p2 << endl;
      }
      cout << "Do you want to try again (Y/N)? "; cin >> again;
   }

   again = 'n';
   do {
      clrscr();
      cout << "Calculating Roots of a Quadratic Equation 2" << endl;
      cout << "============================================" << endl;
      cout << endl;
      cout << "Enter the value of a: "; cin >> a;
      cout << "Enter the value of b: "; cin >> b;
      cout << "Enter the value of c: "; cin >> c;
      d = (b * b) - (4 * a * c);
      if (d < 0){
         p1 = -b / (2 * a);
         p2 = sqrt(abs(d)) / (2 * a);
         cout << "Root X1 = " << p1 << " + " << p2 << "i" << endl;
         cout << "Root X2 = " << p1 << " - " << p2 << "i" << endl;
      } else if (d == 0){
         p1 = -b / (2 * a);
         cout << "Root X1 = X2 = " << p1 << endl;
      } else {
         p1 = (-b + sqrt(d)) / (2 * a);
         p2 = (-b - sqrt(d)) / (2 * a);
         cout << "Root X1 = " << p1 << endl;
         cout << "Root X2 = " << p2 << endl;
      }
      cout << "Do you want to try again (Y/N)? "; cin >> again;
   } while ((again == 'Y') || (again == 'y'));

   cout << "Done...!" << endl;
   getch();
}

#include <iostream.h>
#include <conio.h>
#include <math.h>

int main()
{
   /* Division of Two Numbers Program */
   float a, b, d;
   char again;
   again = 'Y';
   
   while ((again == 'Y') || (again == 'y'))
   {
      clrscr();
      cout << "Calculating Division of Two Numbers (a/b)" << endl;
      cout << "==========================================" << endl;
      cout << endl;
      
      cout << "Enter value for a [0,10]: "; cin >> a;
      while ((a < 0) || (a > 10))
      {
         cout << "Invalid input...!" << endl;
         cout << "Enter value for a [0,10] again: "; cin >> a;
      }
      
      cout << "Enter value for b (0,10]: "; cin >> b;
      while (b == 0)
      {
         cout << "Invalid input...!" << endl;
         cout << "Enter value for b (0,10] again: "; cin >> b;
      }
      
      d = a / b;
      cout << "Given value of a: " << a << endl;
      cout << "Given value of b: " << b << endl;
      cout << endl;
      cout << "Result of " << a << "/" << b << " = " << d << endl;
      cout << "Would you like to try again (Y/N)? "; cin >> again;
   }
   
   cout << "Done...!" << endl;
   getch();
}

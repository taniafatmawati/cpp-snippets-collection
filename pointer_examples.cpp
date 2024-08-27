#include <iostream.h>
#include <conio.h>

void main ()
{
   int *PT;
   int AA = 456, BB;

   // Point PT to AA and assign its value to BB
   PT = &AA;
   BB = *PT;

   cout << endl << " Value of AA = " << AA << endl;
   cout << " Value of *PT = " << *PT << endl;
   cout << " Value of BB = " << BB << endl;

   // Point PT to BB and assign a new value to it
   PT = &BB;
   *PT = 9999;

   cout << endl << " Value of AA = " << AA << endl;
   cout << " Value of *PT = " << *PT << endl;
   cout << " Value of BB = " << BB << endl;

   char a, *b, **c;

   // Assign values
   a = 'X'; // 'XX' is not valid for char; using 'X' instead
   b = &a;
   c = &b;

   cout << endl << " Value of a = " << a << endl;
   cout << " Value of *b = " << *b << endl;
   cout << " Value of b = " << (void*)b << endl; // Print address of 'a'
   cout << " Value of c = " << (void*)c << endl; // Print address of 'b'
   cout << " Value of **c = " << **c << endl;

   getch ();
}

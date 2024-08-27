#include <iostream.h>
#include <conio.h>

void main ()
{
   cout << endl << " ======================================================================== " << endl;
   cout << "      Quartile Values Q1, Q2, and Q3 for n Input Data                   " << endl;
   cout << " ======================================================================== " << endl << endl;

   int n;

   cout << " Enter the value of n = ";
   cin >> n;
   cout << endl;

   float data[100];

   cout << " The data entered should be in ascending order from the smallest value " << endl;
   cout << " to the largest value." << endl;

   for (int i = 0; i < n; i++)
   {
      int j = i + 1;
      cout << " Enter the value of data item " << j << " = ";
      cin >> data[i];
   }

   for (int j = 0; j < 3; j++)
   {
      int a, k;
      float c, Q;

      k = j + 1;
      c = k * (n + 1) / 4;
      a = c;
      float b = c - a;

      Q = data[a - 1] + b * (data[a] - data[a - 1]);

      cout << endl << " Quartile Q" << k << " value is " << Q << endl;
   }

   getch ();
}

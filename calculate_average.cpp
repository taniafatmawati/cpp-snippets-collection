#include <iostream.h>
#include <conio.h>

void main ()
{
   cout << endl << " ======================================================================= " << endl;
   cout << "                          Average of n Data                              " << endl;
   cout << " ======================================================================= " << endl << endl;

   int n;
   float sum, average;

   cout << " Enter the value of n = ";
   cin >> n;

   float data[100];

   sum = 0;

   for (int i = 0; i < n; i++)
   {
      int j = i + 1;
      cout << " Enter the value of data item " << j << " = ";
      cin >> data[i];
      sum = sum + data[i];
   }

   average = sum / n;

   cout << endl << " The average of " << n << " data items is " << average << endl;

   getch ();
}

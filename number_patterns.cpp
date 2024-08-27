#include <iostream.h>
#include <conio.h>
#include <math.h>

int main()
{
   int i, j, k, n;
   
   cout << "Enter the number of rows n: "; cin >> n;
   
   // Pattern 1
   for (i = 1; i <= n; i++)
   {
      for (k = 1; k < (n - (i - 1)); k++) {
         cout << "  ";
      }
      for (j = 1; j <= i; j++)
      {
         cout << j << " ";
      }
      cout << endl;
   }
   
   getch();
   cout << endl << endl;

   // Pattern 2
   for (i = 1; i <= n; i++)
   {
      for (j = i; j <= (i + (i - 1)); j++)
      {
         cout << j << " ";
      }
      cout << endl;
   }
   
   cout << "Done...!" << endl;
   getch();
}

/* 
   Pattern 1: 
   Number of rows = n
   1                 => 1
   1 2               => 2
   1 2 3             => 3
   1 2 3 4           => 4
   and so on

   Pattern 2: 
   Number of rows = n
   1                 => 1
   2 3               => 2
   3 4 5             => 3
   4 5 6 7           => 4
   and so on
*/

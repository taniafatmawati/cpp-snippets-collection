#include <iostream.h>
#include <conio.h>
#include <math.h>

void main ()
{
   long a, b, c, n, Un, U1, U2, Ua;

   cout << " Enter the last number limit = ";
   cin >> n;

   cout << " a)  ";

   for (a = 1; a <= n; a++)
   {
      Un = pow(a, a);

      cout << Un << "     ";
   }

   cout << endl << endl;

   cout << " b)  ";

   U1 = 1;
   U2 = 1;

   cout << U1 << "     " << U2 << "     ";

   for (a = 3; a <= n; a++)
   {
      Ua = U1 + U2;

      cout << Ua << "     ";

      U1 = U2;
      U2 = Ua;
   }

   cout << endl << endl;

   cout << " c)  " << endl;

   for (a = 1; a <= n; a++) // rows
   {
      cout << "    ";

      for (b = 1; b <= a; b++) // columns
      {
         cout << "*     ";
      }

      cout << endl << endl;
   }

   cout << endl << endl;

   for (a = 1; a <= n; a++)
   {
      for (b = n - a; b >= 0; b--)
      {
         cout << "      ";
      }

      for (c = 1; c <= a; c++)
      {
         cout << "*     ";
      }

      cout << endl << endl;
   }

   getch();
}

/*

   1     2     27     256     ...     => Un = n^n

   1     1     2     3     5     8     ...     => Un = U(n-1) + U(n-2)

   *           => 1
   * *         => 2
   * * *       => 3
   * * * *     => 4
   * * * * *   => 5
   ...         => Un = n

           *
         * *
       * * *
     * * * *
   * * * * *
         ...
*/

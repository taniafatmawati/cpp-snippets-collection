#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void main ()
{
   char letters[100];
   float numbers[100];
   int n, swapIndex;

   cout << endl << " Enter the number of letters and numbers to input = ";
   cin >> n;

   cout << endl << endl;

   for (int i = 0; i < n; i++)
   {
      cout << " Enter letter " << (i + 1) << " : ";
      cin >> letters[i];
      cout << " Enter number " << (i + 1) << " : ";
      cin >> numbers[i];
      cout << endl;
   }

   cout << endl << " Before sorting: " << endl;
   cout << "  |";
   for (int j = 0; j < n; j++)
   {
      cout << " " << letters[j] << " |";
   }
   cout << endl << "  |";
   for (int j = 0; j < n; j++)
   {
      cout << " " << numbers[j] << " |";
   }

   for (int i = 0; i < n - 1; i++)
   {
      swapIndex = i;
      int temp;
      char tempChar;

      for (int j = i + 1; j < n; j++)
      {
         if (letters[j] < letters[swapIndex])
         {
            swapIndex = j;
         }
      }

      tempChar = letters[swapIndex];
      letters[swapIndex] = letters[i];
      letters[i] = tempChar;
      temp = numbers[swapIndex];
      numbers[swapIndex] = numbers[i];
      numbers[i] = temp;
   }

   cout << endl << endl << " After sorting: " << endl;
   cout << "  |";
   for (int j = 0; j < n; j++)
   {
      cout << " " << letters[j] << " |";
   }
   cout << endl << "  |";
   for (int j = 0; j < n; j++)
   {
      cout << " " << numbers[j] << " |";
   }
   cout << endl << endl;

   getch ();
}

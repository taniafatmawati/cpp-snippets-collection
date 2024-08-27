#include <iostream.h>
#include <conio.h>

int main()
{
   int row, column, height;

   // Pattern 1
   cout << "Enter the height of the triangle: ";
   cin >> height;
   for(row = 1; row <= height; row++){
      for(column = 1; column <= row; column++){
         cout << "*";
      }
      cout << endl;
   }
   cout << endl << endl;

   // Pattern 2
   cout << "Enter the height of the triangle: ";
   cin >> height;
   for(row = 1; row <= height; row++){
      for(column = 1; column <= (height - (row - 1)); column++){
         cout << "*";
      }
      cout << endl;
   }
   cout << endl << endl;

   // Pattern 3
   cout << "Enter the height of the triangle: ";
   cin >> height;
   for(row = 1; row <= height; row++){
      for(column = height; column >= row; column--){
         cout << "*";
      }
      cout << endl;
   }
   cout << endl << endl;

   // Pattern 4
   cout << "Enter the height of the triangle: ";
   cin >> height;
   for(row = height; row >= 1; row--){
      for(column = 1; column <= row; column++){
         cout << "*";
      }
      cout << endl;
   }
   cout << endl << endl;

   getch();
}
/*
*       1=>1
**      2=>2
***     3=>3
****    4=>4
*****   5=>5
*/
/* height=5
*****    row 1 => columns 5 => 5 - (1-1)
****     row 2 => columns 4 => 5 - (2-1)
***      row 3 => columns 3 => 5 - (3-1)
**       row 4 => columns 2 => 5 - (4-1)
*        row 5 => columns 1 => 5 - (5-1)  height-(row-1)
*/

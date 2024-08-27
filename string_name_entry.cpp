#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

void main() {
   char nama[10][20];
   char name[10][20];
   int i, n;
   n = 2;

   // Input names
   for (i = 0; i < n; i++) {
      cout << "Name " << (i + 1) << " : ";
      gets(nama[i]);  
   }
   cout << endl;

   // Copy names from nama array to name array
   for (i = 0; i < n; i++) {
      strcpy(name[i], nama[i]);
   }

   // Display entered names
   cout << "Entered Names.... " << endl;
   for (i = 0; i < n; i++) {
      cout << "Name " << (i + 1) << " : " << nama[i] << endl;
   }
   cout << endl;

   // Display copied names
   cout << "Data Name..." << endl;
   for (i = 0; i < n; i++) {
      cout << "Name " << (i + 1) << " : " << name[i] << endl;
   }
   cout << endl;

   getch();
}

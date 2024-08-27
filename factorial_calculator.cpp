#include <iostream.h>
#include <conio.h>

void printLine(int n);
long int factorial(int n);

int main()
{
   float x;
   cout << "Calculating Factorials" << endl;
   printLine(10);
   cout << endl;
   
   cout << "Enter any integer: "; cin >> x;
   cout << endl;
   cout << "Result of " << x << " ! = " << factorial(x);
   
   getch();
}

void printLine(int n)
{
   int i;
   for (i = 1; i <= n; i++) {
      cout << "*";
   }
   cout << endl;
}

long int factorial(int n)
{
   int i;
   long int result = 1;
   for (i = 1; i <= n; i++) {
      result = result * i;
   }
   return result;
}

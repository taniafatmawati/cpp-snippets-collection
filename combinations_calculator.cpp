#include <iostream.h>
#include <conio.h>

void printLine(int n);
float sum(float a, float b);
long int factorial(int n);
long int combination(int a, int b);

int main()
{
   float x, y;
   cout << "Calculating Combinations (a, b)" << endl;
   printLine(25);
   cout << endl;
   
   cout << "Enter integer value for a: "; cin >> x;
   cout << "Enter integer value for b: "; cin >> y;
   cout << endl;
   
   cout << x << " ! = " << factorial(x) << endl;
   cout << y << " ! = " << factorial(y) << endl;
   cout << "Combination(" << x << ", " << y << ") = " << combination(x, y) << endl;
   
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

float sum(float a, float b)
{
   return a + b;
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

long int combination(int a, int b)
{
   return factorial(a) / (factorial(b) * factorial(a - b));
}

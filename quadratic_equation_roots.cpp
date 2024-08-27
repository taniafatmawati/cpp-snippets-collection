#include <iostream.h>
#include <conio.h>
#include <math.h>

void main ()
{
   cout<<"        Calculating Roots of a Quadratic Equation        "<<endl<<endl<<endl;

   int a,b,c,D;
   float x1,x2;

   cout<<"Enter the value of a = ";
   cin>>a;
   cout<<"Enter the value of b = ";
   cin>>b;
   cout<<"Enter the value of c = ";
   cin>>c;

   cout<<endl;

   D = b * b - 4 * a * c;

   if (D > 0)
   {
      x1 = ( - b + sqrt(D) ) / ( 2 * a );

      cout<<"The value of x1 = "<<x1<<endl;

      x2 = ( - b - sqrt(D) ) / ( 2 * a );

      cout<<"The value of x2 = "<<x2<<endl;
   }
   else if (D == 0)
   {
      x1 = ( - b ) / ( 2 * a );

      cout<<"The value of x1 = "<<x1<<endl;

      x2 = x1;

      cout<<"The value of x2 = "<<x2<<endl;
   }
   else cout<<"No real roots or the roots are imaginary"<<endl;

   getch ();
}

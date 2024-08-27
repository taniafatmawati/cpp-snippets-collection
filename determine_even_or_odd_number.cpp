#include <iostream.h>
#include <conio.h>

void main ()
{
   cout<<"     Determine Whether an Integer is Even or Odd     "<<endl;
   cout<<"-----------------------------------------------------"<<endl<<endl;

   int a;
   cout<<"Enter the number = ";
   cin>>a;

   cout<<endl;

   if (a % 2 == 0)
   {
      cout<<"The number "<<a<<" is an "<<"Even Number";
   }
   else
   {
      cout<<"The number "<<a<<" is an "<<"Odd Number";
   }

   getch();
}

#include <iostream.h>
#include <conio.h>
#include <math.h>

int main()
{
   /* Time Difference Calculation Program */
   int h1, h2, m1, m2, s1, s2;
   char again;
   again = 'Y';
   
   while ((again == 'Y') || (again == 'y'))
   {
      clrscr();
      cout << "Calculating Time Difference" << endl;
      cout << "===========================" << endl;
      cout << endl;
      
      cout << "Enter Hour 1: "; cin >> h1;
      cout << "Enter Minute 1: "; cin >> m1;
      cout << "Enter Second 1: "; cin >> s1;
      cout << endl;
      
      cout << "Enter Hour 2: "; cin >> h2;
      cout << "Enter Minute 2: "; cin >> m2;
      cout << "Enter Second 2: "; cin >> s2;
      
      if (s2 < s1) {
         s2 = s2 + 60;
         m2 = m2 - 1;
      }
      if (m2 < m1) {
         m2 = m2 + 60;
         h2 = h2 - 1;
      }
      cout << "Time Difference: " << h2 - h1 << " Hours " << m2 - m1 << " Minutes " << s2 - s1 << " Seconds" << endl;

      cout << "Would you like to try again (Y/N)? "; cin >> again;
   }
   
   cout << "Done...!" << endl;
   getch();
}

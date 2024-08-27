#include <iostream.h>
#include <conio.h>

void main ()
{
   cout << endl << " ========================================================================== " << endl;
   cout << "                 Mode of n Inputted Number Data                              " << endl;
   cout << " ========================================================================== " << endl << endl;

   int n;
   cout << " Enter the value of n = ";
   cin >> n;

   float data[100];
   int count[100];
   float mode;

   for (int i = 0; i < n; i++)
   {
      int k = i + 1;
      cout << " Enter the value of data item " << k << " = ";
      cin >> data[i];
   }

   for (int j = 0; j < n; j++)
   {
      count[j] = 1;
      int k = j + 1;
      for (int o = k; o < n; o++)
      {
         if (data[j] == data[o])
         {
            count[j] = count[j] + 1;
         }
      }
   }

   int maxCount = 1;
   for (int l = 0; l < n; l++)
   {
      if (maxCount < count[l])
      {
         maxCount = count[l];
         mode = data[l];
      }
   }

   float modeValue = mode;

   cout << endl << " The mode of the " << n << " inputted data is " << modeValue;

   for (int p = 0; p < n; p++)
   {
      if (count[p] == maxCount)
      {
         if (data[p] == modeValue) continue;
         else
         {
            mode = data[p];
            cout << " " << mode;
         }
      }
   }

   cout << endl << " The mode appears in data positions: ";

   for (int s = 0; s < n; s++)
   {
      if (data[s] == modeValue) cout << (s + 1) << "  ";
      else if (count[s] == maxCount)
      {
         if (data[s] == modeValue) continue;
         else
         {
            modeValue = data[s];
            cout << (s + 1) << "  ";
         }
      }
   }

   getch ();
}

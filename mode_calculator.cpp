#include <iostream.h>
#include <conio.h>

void main ()
{
   cout << endl << " ========================================================================== " << endl;
   cout << "                 Mode of n Input Data Numbers                              " << endl;
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
      cout << " Enter value for data " << k << " = ";
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

   int max_count = 1;
   for (int l = 0; l < n; l++)
   {
      if (max_count < count[l])
      {
         max_count = count[l];
         mode = data[l];
      }
   }

   float mode1 = mode;

   cout << endl << " Mode of the " << n << " input data is " << mode1;

   for (int p = 0; p < n; p++)
   {
      if (count[p] == max_count)
      {
         if (data[p] == mode1) continue;
         else
         {
            mode = data[p];
            cout << " " << mode;
         }
      }
   }

   getch();
}

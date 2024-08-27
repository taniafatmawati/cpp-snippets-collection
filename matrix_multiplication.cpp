#include <iostream.h>
#include <conio.h>

void main ()     
{
   Retry:
   
   cout << endl << " ====================================================================== " << endl;
   cout << "       Multiplication of Matrix A (Order n x m) with Matrix B (Order r x s) " << endl;
   cout << " ====================================================================== " << endl << endl;

   int n, m, r, s;
   float sum;
   char answer;
   float A[100][100];
   float B[100][100];
   float C[100][100];

   cout << " Order of Matrix A : " << endl;
   cout << " Enter value for n = ";
   cin >> n;
   cout << " Enter value for m = ";
   cin >> m;
   cout << endl << " Order of Matrix B : " << endl;
   cout << " Enter value for r = ";
   cin >> r;
   cout << " Enter value for s = ";
   cin >> s;

   if (m == r)
   {
      cout << endl << " Elements of Matrix A : " << endl;
      for (int b = 0; b < n; b++)
      {
         for (int k = 0; k < m; k++)
         {
            cout << " Enter value for element a_" << (b + 1) << (k + 1) << " = ";
            cin >> A[b][k];
         }
      }

      cout << endl << " Matrix A : ";
      for (int b = 0; b < n; b++)
      {
         if (b > 0) cout << "             ";
         cout << " [";
         for (int k = 0; k < m; k++)
         {
            cout << "  " << A[b][k] << "  ";
         }
         cout << "] " << endl;
      }

      cout << endl << endl << " Elements of Matrix B : " << endl;
      for (int b = 0; b < r; b++)
      {
         for (int k = 0; k < s; k++)
         {
            cout << " Enter value for element b_" << (b + 1) << (k + 1) << " = ";
            cin >> B[b][k];
         }
      }

      cout << endl << " Matrix B : ";
      for (int b = 0; b < r; b++)
      {
         if (b > 0) cout << "             ";
         cout << " [";
         for (int k = 0; k < s; k++)
         {
            cout << "  " << B[b][k] << "  ";
         }
         cout << "] " << endl;
      }

      cout << endl << endl << " Result of multiplying Matrix A and Matrix B (Matrix C): " << endl;
      cout << endl << " Matrix C : ";
      for (int b = 0; b < n; b++)
      {
         if (b > 0) cout << "             ";
         cout << " [";
         for (int k = 0; k < s; k++)
         {
            sum = 0;
            for (int t = 0; t < m; t++)
            {
               sum = sum + A[b][t] * B[t][k];
            }
            C[b][k] = sum;
            cout << "  " << C[b][k] << "  ";
         }
         cout << "] " << endl;
      }
   }
   else
   {
      cout << endl << endl << " Matrix multiplication cannot be performed," << endl;
      cout << " please check the matrix order values you entered." << endl;
      RetryInput:
      cout << endl << " Do you want to re-enter the matrix order values?" << endl;
      cout << " Enter your answer ( Y / N ) : ";
      cin >> answer;

      if (answer == 'Y')
      {
         clrscr();
         goto Retry;
      }
      else if (answer == 'N')
      {
         cout << endl << endl << " Done..." << endl;
         cout << " Thank you..." << endl;
      }
      else
      {
         cout << endl << " The answer you entered is incorrect, please enter your answer again." << endl << endl;
         goto RetryInput;
      }
   }

   getch();
}

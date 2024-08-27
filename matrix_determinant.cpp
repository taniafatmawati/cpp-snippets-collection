#include <iostream.h>
#include <conio.h>

void main ()
{
  cout << endl << " =================================================================== " << endl;
  cout << "                   Determinant of Matrix A Order m x n               " << endl;
  cout << " =================================================================== " << endl << endl;

  int m, n;
  float a, determinant;
  float A[100][100];

  cout << " Order of Matrix A : " << endl;
  cout << " Enter value for m = ";
  cin >> m;
  cout << " Enter value for n = ";
  cin >> n;

  if (m == n)
  {
    cout << endl << " Elements of Matrix A : " << endl;
    for (int b = 0; b < m; b++)
    {
      for (int k = 0; k < n; k++)
      {
        cout << " Enter value for element a_" << (b + 1) << (k + 1) << " = ";
        cin >> A[b][k];
      }
    }

    cout << endl << " Matrix A : ";
    for (int b = 0; b < m; b++)
    {
      if (b > 0) cout << "             ";
      cout << " [";
      for (int k = 0; k < n; k++)
      {
        cout << "  " << A[b][k] << "  ";
      }
      cout << "] " << endl;
    }

    /* cout << endl << endl << " Process of row operations (OBE) to achieve" << endl;
    cout << " upper triangular matrix form." << endl << endl;
    */

    for (int i = 0; i < m - 1; i++)
    {
      for (int j = i + 1; j < m; j++)
      {
        a = A[j][i] / A[i][i];
        for (int k = i; k < m; k++)
        {
          A[j][k] = A[j][k] - (a * A[i][k]);
          /* for (int p = 0; p < m; p++)
          {
            cout << " [";
            for (int r = 0; r < m; r++)
            {
              cout << "  " << A[p][r] << "  ";
            }
            cout << "] " << endl;
          }
          cout << endl << endl;
          getch();
          */
        }
      }
    }

    determinant = 1;
    for (int i = 0; i < m; i++)
    {
      determinant = determinant * A[i][i];
    }

    cout << endl << " The determinant of matrix A is " << determinant << endl << endl;

  }
  else
  {
    cout << endl << " The determinant calculation cannot be performed because" << endl;
    cout << " matrix A is not a square matrix." << endl;
  }

  getch ();
}

#include <iostream.h>
#include <conio.h>

void printLine(int n);
float add(float a, float b);
long int factorial(int n);
long int combination(int a, int b);
void displayPascalTriangle(int n);

int main()
{
    int n;
    cout << "Displaying Pascal's Triangle" << endl;
    printLine(28);
    cout << endl;
    cout << "Enter the depth of Pascal's Triangle n: "; cin >> n;
    displayPascalTriangle(n);
    getch();
}

void printLine(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
}

float add(float a, float b)
{
    return a + b;
}

long int factorial(int n)
{
    int i;
    long int result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

long int combination(int a, int b)
{
    return (factorial(a) / (factorial(b) * factorial(a - b)));
}

void displayPascalTriangle(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

/*

1   1               combination(1,0)  combination(1,1)
1   2   1           combination(2,0)  combination(2,1)  combination(2,2)
1   3   3   1       combination(3,0)  combination(3,1)  combination(3,2)  combination(3,3)
1   4   6   4   1   combination(4,0)  combination(4,1)  combination(4,2)  combination(4,3)  combination(4,4)

*/

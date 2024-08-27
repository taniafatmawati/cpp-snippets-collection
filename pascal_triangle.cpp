#include <iostream.h>
#include <conio.h>

void printLine(int n);
float add(float a, float b);
long int factorial(int n);
long int combination(int a, int b);

int main()
{
    int n, i, j;
    cout << "Displaying Pascal's Triangle" << endl;
    printLine(28);
    cout << endl;
    cout << "Enter the depth of Pascal's Triangle n: "; cin >> n;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

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

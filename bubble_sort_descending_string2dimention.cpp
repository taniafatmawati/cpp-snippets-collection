#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void display(int array_count, char data[100][100])
{
    for (int i = 0; i < array_count; i++)
    {
        cout << endl << " " << data[i];
    }
}

void bubble_sort_descending(int array_count, char data[100][100])
{
    char temp[1][100];
    int check;
    do
    {
        check = 0;
        for (int j = 0; j < (array_count - 1); j++)
        {
            for (int i = 0; i < 100; i++)
            {
                if (data[j][i] > data[j + 1][i]) goto next;
                else if (data[j][i] == data[j + 1][i]) continue;
                else if (data[j][i] < data[j + 1][i])
                {
                    check++;
                    for (int a = 0; a < 100; a++)
                    {
                        temp[0][a] = data[j][a];
                        data[j][a] = data[j + 1][a];
                        data[j + 1][a] = temp[0][a];
                    }
                    goto next;
                }
            }
        next:
            ;
        }
    } while (check > 0);
}

void main()
{
    int n;
    char data[100][100];

    cout << endl << " Enter the number of arrays to be sorted: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter array " << (i + 1) << " : ";
        gets(data[i]);
    }

    cout << endl << endl << " Data before sorting: ";
    display(n, data);

    bubble_sort_descending(n, data);

    cout << endl << endl << " Data after sorting: ";
    display(n, data);

    getch();
}

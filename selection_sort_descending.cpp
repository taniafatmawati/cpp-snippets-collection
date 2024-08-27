#include <iostream.h>
#include <conio.h>

void selection_sort_descending(int data_count, char data[])
{
    int j, k;
    char temp;
    for (int i = 0; i < (data_count - 1); i++)
    {
        k = i;
        for (int j = (i + 1); j < data_count; j++)
        {
            if (data[k] < data[j])
            {
                k = j;
            }
        }

        temp = data[k];
        data[k] = data[i];
        data[i] = temp;
    }
}

void display(int data_count, char data[])
{
    for (int i = 0; i < data_count; i++)
    {
        cout << data[i];
    }
}

void main()
{
    char data[100];
    int n;

    cout << endl << " Enter the data to be sorted: ";
    cin >> data;

    n = strlen(data);

    cout << endl << endl << " Data before sorting: ";
    display(n, data);

    selection_sort_descending(strlen(data), data);

    cout << endl << endl << " Data after sorting: ";
    display(n, data);

    getch();
}

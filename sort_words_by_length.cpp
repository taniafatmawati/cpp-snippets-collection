#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void main()
{
    char words[5][20];
    char concatenated[1][100] = {""};
    int lengths[5], n = 5, temp;

    // Input words from the user
    for (int i = 0; i < 5; i++)
    {
        cout << endl << " Enter word " << (i + 1) << " : ";
        cin >> words[i];
    }
    cout << endl << endl;

    // Convert words to uppercase and calculate their lengths
    for (int i = 0; i < 5; i++)
    {
        strupr(words[i]);
        cout << " Word " << (i + 1) << " (uppercase) : " << words[i] << endl;
        lengths[i] = strlen(words[i]);
        cout << " Length of word " << (i + 1) << " = " << lengths[i] << endl << endl;
        strcat(concatenated[0], " ");
        strcat(concatenated[0], words[i]);
    }
    cout << endl << concatenated[0] << endl << endl;

    // Sort words by their lengths in ascending order
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        char tempWord[20];

        for (int j = i + 1; j < n; j++)
        {
            if (lengths[j] < lengths[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap lengths
        temp = lengths[minIndex];
        lengths[minIndex] = lengths[i];
        lengths[i] = temp;

        // Swap words
        strcpy(tempWord, words[minIndex]);
        strcpy(words[minIndex], words[i]);
        strcpy(words[i], tempWord);
    }

    // Output sorted words
    cout << endl << " Words sorted by length: ";
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << "  ";
    }
    cout << endl;

    getch();
}

#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void main ()
{
   cout << endl << " ========================================================================== " << endl;
   cout << "          Search for a Character, its Position, and Frequency               " << endl;
   cout << " ========================================================================== " << endl << endl;

   char sentence[100];
   char searchChar;
   int count = 0;

   cout << " Enter the sentence to search for the character: ";
   gets(sentence);
   
   cout << endl << endl << " Sentence: " << sentence << endl;
   cout << " Enter the character to search in the sentence: ";
   cin >> searchChar;
   cout << endl << endl << " Search Result: " << endl;

   cout << endl << " In the sentence '" << sentence << "', the character " << searchChar << " is located at index(es): ";
   for (int i = 0; i < strlen(sentence); i++)
   {
      if (toupper(sentence[i]) == toupper(searchChar))
      {
         cout << "[" << i << "] ";
         count++;
      }
   }
   
   cout << endl << " The number of times the character '" << searchChar << "' appears in the sentence = " << count << endl;

   getch ();
}

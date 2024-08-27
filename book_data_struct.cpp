#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct data
{
   char book_id[30];
   char title[30];
   char author[30];
   int year;
};

void main()
{
   data books[100];
   int n;

   cout << endl << " Enter the number of book records to be entered: ";
   cin >> n;
   cin.ignore(); // To ignore the newline character left in the buffer after cin

   for (int i = 0; i < n; i++)
   {
      cout << endl << " Enter book ID\t\t : "; gets(books[i].book_id);
      cout << " Enter book title\t : "; gets(books[i].title);
      cout << " Enter author's name\t : "; gets(books[i].author);
      cout << " Enter the year the book was written\t : "; cin >> books[i].year;
      cin.ignore(); // To ignore the newline character left in the buffer after cin
   }
   clrscr();

   cout << endl;
   cout << " BOOK DATA " << endl << endl;
   for (int i = 0; i < n; i++)
   {
      cout << " Book ID\t : " << books[i].book_id << endl;
      cout << " Book Title\t : " << books[i].title << endl;
      cout << " Author's Name\t : " << books[i].author << endl;
      cout << " Year\t : " << books[i].year << endl;
      cout << endl;
   }

   getch();
}

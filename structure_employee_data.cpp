#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

// Define structure for date
typedef struct {
   int day;
   int month;
   int year;
} Date;

// Define structure for employee
typedef struct {
   char name[30];
   char id[11];  
   Date birth_date;
} Employee;

void main() {
   Employee data[5];
   int i;

   // Input employee data
   for (i = 0; i < 3; i++) {
      cout << "Enter name: ";
      gets(data[i].name);  
      cout << "Enter ID: ";
      gets(data[i].id);    
      cout << "Enter Day of Birth: ";
      cin >> data[i].birth_date.day;
      cout << "Enter Month of Birth: ";
      cin >> data[i].birth_date.month;
      cout << "Enter Year of Birth: ";
      cin >> data[i].birth_date.year;
   }
   cout << endl << endl;

   // Display employee data
   cout << "No. \t Name \t ID \t Date of Birth" << endl;
   for (i = 0; i < 3; i++) {
      cout << "Data " << (i + 1) << endl;
      cout << "Name \t : " << data[i].name << endl;
      cout << "ID \t : " << data[i].id << endl;
      cout << "Date of Birth : " << data[i].birth_date.day << "/" << data[i].birth_date.month << "/" << data[i].birth_date.year << endl;
      cout << endl;
   }

   getch();
}

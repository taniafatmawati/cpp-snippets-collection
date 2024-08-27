#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main() {
    int i, j, rows, cols, value;
    float A[10][10];
    char matrix_name[20];
    
    cout << "Read Matrix Data" << endl;
    cout << endl;
    
    ifstream input_file;
    input_file.open("d:\\matrix.txt");
    
    char line[100];
    input_file.getline(line, 90); // read matrix name
    cout << "Matrix Name: " << line << endl;
    
    input_file.getline(line, 90); // read number of rows
    rows = atoi(line);
    cout << "Number of Rows: " << rows << endl;
    
    input_file.getline(line, 90); // read number of columns
    cols = atoi(line);
    cout << "Number of Columns: " << cols << endl;
    
    cout << endl;
    cout << "Matrix Elements: " << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            input_file.getline(line, 10);
            value = atoi(line);
            A[i][j] = value;
            cout << value << "  ";
        }
        cout << endl;
    }
    
    cout << endl << endl;
    cout << "Matrix Elements" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    input_file.close();
    system("pause");
}

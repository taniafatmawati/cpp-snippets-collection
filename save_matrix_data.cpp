#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main() {
    int i, j, rows, cols;
    float value;
    char matrix_name[20];
    
    cout << "Saving Matrix Data" << endl;
    cout << "Matrix Name: ";
    gets(matrix_name);  
    cout << "Number of Rows: ";
    cin >> rows;
    cout << "Number of Columns: ";
    cin >> cols;
    cout << "Starting Save Process...!" << endl;
    
    ofstream output_file;
    output_file.open("d:\\matrix.txt");
    output_file << matrix_name << "\n";
    output_file << rows << "\n";
    output_file << cols << "\n";
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "A[" << (i + 1) << "," << (j + 1) << "] = ";
            cin >> value;
            output_file << value << "\t";
        }
        cout << endl;
        output_file << "\n";
    }
    
    cout << "Save Process Completed...!" << endl;
    output_file.close();
    system("pause");
}

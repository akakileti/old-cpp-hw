/* Author: Anusha Kakileti (anushakakileti@my.unt.edu)
 * Date: 11/10/20
 * CSCE 1030.396
 * Program ak0896HW4func.cpp
 * Description: 
 */

 #include "ak0896HW4.h"

 void printHeader() {
     cout << endl;
     cout << "CSCE 1030.396 - Computer Science" << endl;
     cout << "Anusha Kakileti // ak0896\nanushakakileti@my.unt.edu\n";
     cout << endl;
 }
 
 void init(char **matrix, int rows) {
     srand(time(NULL));
     int Qpos;
     for (int j = 0; j < COLS; ++j) {
         Qpos = rand() % rows;
         for (int i = 0; i < rows; ++i) {
             if (i == Qpos) {
                 matrix[i][j] = 'Q';
             } else {
                 matrix[i][j] = (rand() % 10) + '0'; // store digits as char
             }
         }
     }
 }
 
 void display(char **matrix, int rows, int **showmatrix) {
     cout << "     A  B  C  D  E  F  G  H  I  J" << endl;
     cout << "  +-------------------------------+" << endl;
     for (int i = 0; i < rows; ++i) {
         cout << i << " | ";
         for (int j = 0; j < COLS; ++j) {
             if (showmatrix[i][j] != 1) {
                 cout << "-- ";
             } else if (matrix[i][j] == 'Q') {
                 cout << " A ";
             } else if (matrix[i][j] == 'X') {
                 cout << " X ";
             } else {
                 cout << " * ";
             }
         }
         cout << "|" << endl;
     }
     cout << "  +-------------------------------+" << endl;
 }
 
 void modify(char **matrix, int rows, int col, int **showmatrix, int &ants) {
     int strikerow;
     while (true) {
         cout << "Enter row position in column " << (char)('A' + col) << " to strike: ";
         cin >> strikerow;
         if (strikerow < 0 || strikerow >= rows) {
             cout << "Invalid row (" << strikerow << ") entered. Try again..." << endl;
         } else if (matrix[strikerow][col] == 'X') {
             cout << "Ant colony already explored. Try again!" << endl;
         } else {
             break;
         }
     }
 
     int antscaptured = 0;
     if (matrix[strikerow][col] == 'Q') {
         for (int i = 0; i < rows; ++i) {
             showmatrix[i][col] = 1;
             if (matrix[i][col] >= '0' && matrix[i][col] <= '9') {
                 antscaptured += matrix[i][col] - '0';
             }
         }
         ants += antscaptured;
         cout << "Queen found! Anthony's army captured ";
         cout << antscaptured << " and is now " << ants << " ants strong!\n" << endl;
     } else if (matrix[strikerow][col] >= '0' && matrix[strikerow][col] <= '9') {
         antscaptured = matrix[strikerow][col] - '0';
         cout << "Anthony's army lost " << antscaptured;
         ants -= antscaptured;
         cout << " and now has " << ants << " ants remaining!\n" << endl;
         showmatrix[strikerow][col] = 1;
         matrix[strikerow][col] = 'X';
     }
 
     if (ants <= 0) {
         display(matrix, rows, showmatrix);
         cout << "Sorry, but Anthony's army has been defeated!\n";
 
         deleteMatrix(matrix, rows);
         deleteShowMatrix(showmatrix, rows);
 
         exit(EXIT_FAILURE);
     }
 }
 
 void deleteMatrix(char **matrix, int rows) {
     for (int i = 0; i < rows; ++i) {
         delete[] matrix[i];
     }
     delete[] matrix;
 }
 
 void deleteShowMatrix(int **showmatrix, int rows) {
     for (int i = 0; i < rows; ++i) {
         delete[] showmatrix[i];
     }
     delete[] showmatrix;
 }
 
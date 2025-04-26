/* Author: Anusha Kakileti (anushakakileti@my.unt.edu)
 * Date: 11/10/20
 * CSCE 1030.396
 * Program ak0896HW4main.cpp
 * Description: The main code for a game where Anthony and his ant army tries to conquer other ant colonies in a 3x10 matrix
 */

 #include "ak0896HW4.h"

 int main() {
     printHeader();
 
     int rows = 3;
     int **showmatrix = new int*[rows];
     for (int i = 0; i < rows; ++i) {
         showmatrix[i] = new int[COLS]();
     }
 
     char **matrix = new char*[rows];
     for (int i = 0; i < rows; ++i) {
         matrix[i] = new char[COLS];
     }
 
     init(matrix, rows);
 
     srand(time(NULL));
     int anthonyants = rand() % 10 + 15;
     cout << "Let's begin! Anthony's army is " << anthonyants << " strong!\n";
     display(matrix, rows, showmatrix);
 
     for (int j = 0; j < COLS; ++j) {
         int rowdone = 0;
         while (rowdone != rows) {
             modify(matrix, rows, j, showmatrix, anthonyants);
             display(matrix, rows, showmatrix);
             rowdone = 0;
             for (int i = 0; i < rows; ++i) {
                 rowdone += showmatrix[i][j];
             }
         }
     }
 
     cout << "Congratulations! Anthony the Ant is victorious with an army of " << anthonyants << " remaining!" << endl;
 
     deleteMatrix(matrix, rows);
     deleteShowMatrix(showmatrix, rows);
 
     return 0;
 }
 
/* Author: Anusha Kakileti (anushakakileti@my.unt.edu)
 * Date: 11/10/20
 * CSCE 1030.396
 * Program ak0896HW4.h
 * Description: Contains what files to include, the function definitions, and the declaration of the global column constant for the ant matrix to be used in ak0896HW4main.cpp and ak0896HW4func.cpp
 */

 #include <iostream>
 #include <cstdlib> //rand, srand
 #include <ctime> //time
 using namespace std;
 
 int const COLS = 10; //num of columns in matrix
 
 /* Function: printHeader */
 void printHeader();
 
 /* Function: init */
 void init(char **matrix, int rows);
 
 /* Function: display */
 void display(char **matrix, int rows, int **showmatrix);
 
 /* Function: modify */
 void modify(char **matrix, int rows, int col, int **showmatrix, int &ants);
 
 /* Function: deleteMatrix */
 void deleteMatrix(char **matrix, int rows);
 
 /* Function: deleteShowMatrix */
 void deleteShowMatrix(int **showmatrix, int rows);
 
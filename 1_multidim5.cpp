/******************************************************************************
Two dim with functions 
    functions
        fillMatrix
        printMatrix
        sumMatrix
*******************************************************************************/
#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 5;
//prototype functions
void fillMatrix(int matrix[][COLS],int rows);
void printMatrix (const int matrix[][COLS],int rows);
int sumMatrix (const int matrix[][COLS],int rows);

int main()
{
    int matrix[ROWS][COLS];
    
    //fill data
    fillMatrix(matrix, ROWS);
    
    printMatrix(matrix, ROWS);

    cout << "sum of the matrix " << sumMatrix(matrix, ROWS) << endl;
    return 0;
}
//fill matrix with numbers
void fillMatrix(int matrix[][COLS],int rows)
{
    cout << "Fill matrix with numbers  ";
    int value = 1;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<COLS; j++) {
            matrix[i][j] = value++;
        }
    }
}

void printMatrix (const int matrix[][COLS],int rows)
{
    cout << "\nMatrix content \n";
    for (int i=0; i<rows; i++) {
        for (int j=0; j<COLS; j++) {
            cout << matrix[i][j] << " ";
        }
    cout << endl;   
    }
}
int sumMatrix (const int matrix[][COLS],int rows)
{
    int sum = 0; //accumulator
    for (int i=0; i<rows; i++) {
        for (int j=0; j<COLS; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

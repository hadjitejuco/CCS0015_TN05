/******************************************************************************
https://github.com/hadjitejuco/CCS0015_TN05
Multi dim arrays
    syntax
        data_type arrayname [row][column];
        int matrix[3][3];
        {1,2,3},
        {4,5,6},
        {7,8,9}
        
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "value of row 2 and column 3 is " << matrix[1][2];

    return 0;
}

/******************************************************************************

https://github.com/hadjitejuco/CCS0015_TN05

arrys
    store (data types are the same)
    
Declare
    data_type arrayname[size];

    int numbers[5];

initialization and declaration
                //    0,1,2,3,4            
    int numbers[5] = {1,2,3,4,5};
    
    int numbers[] = {1,2,3,4,5}; //size of array 
    

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    //declare an array of integers
    int numbers[] = {1,2,3,4,5};
    cout << "Display the 3rd element: " << numbers[2];

    return 0;
}










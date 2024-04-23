/******************************************************************************
basic pointer and & (address operator)
 * &
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ptr = &var;   //pointer to an integer 

    //access data 
    cout << "value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (address of var) " << ptr << endl;
    cout << "Value of integer pointer(ptr): " << *ptr << endl;
    return 0;
}

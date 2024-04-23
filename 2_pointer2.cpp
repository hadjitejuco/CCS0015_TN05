/******************************************************************************
Referencing Operator (*)
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int value = 5;
    int *ptr = &value;
    
    cout << "original value " << value << endl;
    //change of value to our value var since we know the address by ptr 
    *ptr = 25;
    cout << "New value " << value << endl;
    return 0;
}

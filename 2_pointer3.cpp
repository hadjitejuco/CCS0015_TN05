/******************************************************************************
dynamic memory management
new delete
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    //create a dynamic memory var
    int *ptr = new int;
    *ptr = 10; //assignment of value to the ptr variable
    
    cout << "value of dynamically allocated memory " << *ptr << endl;
    //erase free up the alloacted memory
    delete ptr;
    //set nullptr to the deleted var
    ptr = nullptr;
    cout << "value of dynamically allocated memory " << *ptr << endl;
    return 0;
}

/******************************************************************************
dynamic arrays and pointers

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int *arr = new int[size]; //dynamic array allocation
    
    for (int i=0; i<size;i++){
        arr[i] = i * 2; 
    }
    cout << "test";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    
    delete[] arr;
    arr = nullptr;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

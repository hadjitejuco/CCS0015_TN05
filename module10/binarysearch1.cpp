/******************************************************************************
Iterative approach
x = target
while() {
    mid = (low + high)/2 
    
    if (mid==x)
        return mid //found
    if x > mid 
        low = mid + 1 //shift to the right side 
    else
        high = mid -1 //left side 
}
******************************************************************************/

#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int low, int high);

int main()
{
    int array[]={3,4,5,6,7,8,9};  //sorted array 
    int x = 8;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array,x,0,n-1);
    
    if (result == -1) {
        cout << " Not found ";
    }else{
        cout << "Element found at index " << result << endl;//found
    }
    return 0;
}
int binarySearch(int array[], int x, int low, int high) {
    
    while(low <= high) {
        int mid = low + (high-low)/2; //use to calculate the mid prevent overflow
        if (array[mid]==x) //check if the middle is the target 
            return mid; //found 
        if (array[mid]<x) //if the middle element is less than the target
            low = mid+1; //adjust the low boundary +1 -> right half
        else
            high = mid -1; //adjust the high boundary -1 to the left half 
    }
    return -1;
}

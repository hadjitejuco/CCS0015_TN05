/******************************************************************************
Algorithm for Sequential (Linear Search)

1.  Start from the first element
2.  Compare the current element with the target element 
3.  If the current element matches the target, returns the position
    best case - target is found at the first element
    worse case - at the last (or not found)
4.  if the current element does not match, we move to the next element 
5.  Repeat steps 2-4 until we reach the limit
6.  if the target element is not found, return a value it is not present

*******************************************************************************/
#include <iostream>
using namespace std;
int sequentialSearch(char arr[],int size,char target);
int main()
{
   char arr[] = {'a','b','c','d','e','f'};
   int size = sizeof(arr)/sizeof(arr[0]);
   char target = 'd';
   int result = sequentialSearch(arr,size,target);
   
   if (result != -1) {
       cout << "Element is found at index " << result << endl;
   }else{
       cout << "Element not found in the array " << endl;
   }
    return 0;
}
int sequentialSearch(char arr[],int size,char target)
{
    for (int i=0; i<size;i++){
        if (arr[i]==target) {
            return i; //returns the index of the target element
        }
    }
    return -1; //-1 element is not found 
}



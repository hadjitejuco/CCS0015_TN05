/******************************************************************************
//binary search
//sorting algorithm
//Bubble sort

*******************************************************************************/

#include <iostream>
using namespace std;

//functions
void swap(int &a, int &b);
void sortArray(int arr[], int size);
int binarySearch(int arr[],int size, int target);

int main()
{
    int arr[]={34,7,23,32,5,62};
    int size = sizeof(arr)/sizeof(arr[0]);
    //int target = 62; //found
    int target = 72;
    //task sort data 
    //display the unsorted data
    cout << "Unsorted array ";
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    sortArray(arr, size);
    
    cout << "Sorted array ";
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Target value " << target<<endl;
    int result = binarySearch(arr,size,target);
    
    if (result != -1){
        cout << "element found at index " << result << endl;
    }else{
        cout << "Element not found in the array " << endl;
    }
    
    
    
    
    return 0;
}
//UDF to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;
}

//Bubble Sort 
void sortArray(int arr[], int size){
    for (int i=0; i<size-1;i++){ //outer loop for each element
         for(int j=0; j<size -i -1; j++){ //inner loop for comparison
            if (arr[j]>arr[j+1]){ //if the current element is greater than the next 
                swap(arr[j], arr[j+1]); //swap the elements 
            }
         }
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k<size; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int binarySearch(int arr[],int size, int target) {
    int left = 0;  //low
    int right = size - 1; //high
    int iteration = 1;
    
    while(left<=right){
        int middle = left+(right-left)/2;
        cout << "Iteration " << iteration << ": left= "<<left<<",right= "<<right<< ", middle= " << middle
         << ", low value = "<<arr[left] << " high value = " << arr[right] << " mid value " << arr[middle] << endl;
         
        if (arr[middle]==target) {
            return middle;  //return the index id (found)
        }
        if (arr[middle]<target){
            left = middle+1;
        }else{
            right = middle-1;
        }
        iteration++;
    }
    return -1;
}










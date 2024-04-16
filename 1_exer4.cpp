/******************************************************************************

https://github.com/hadjitejuco/CCS0015_TN05
input and display numbers
identify the largest number 
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n, lar;
    cout << "Enter n: ";
    cin >> n;
    //input values
    for (i=0; i<n;i++){
        cin >> a[i];
    }
    lar=a[0]; //assuming the first element is the largest 
    cout << "Entered numbers are ";
    for (i=0; i<n; i++){
        if (lar<a[i]) //comparing contents of array with other elements
            lar= a[i]; //replace the content with array elemnts
    }
    cout << "\n Largest number " << lar;
    return 0;
}










/******************************************************************************

https://github.com/hadjitejuco/CCS0015_TN05
input and display numbers
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   
    int a[100];
    int i, n;
   
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " numbers. ";
    for (i = 0; i<n; i++). //reading values into our array
        cin >> a[i];
    cout << "Entered numbers are ";
    for (i=0; i<n;i++)      //printing of array
        cout << a[i] << " ";
    return 0;
}


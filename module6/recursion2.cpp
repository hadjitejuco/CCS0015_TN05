/******************************************************************************
factorial of a number
Enter n: 5
Factorial of 5 is 120 

Depeth 0: Calculating factorial (5): 5 * factoril(4)
*******************************************************************************/
//recursion
#include <iostream>
using namespace std;
//function

//Base case -> condition set under the function to make the stop
// Recursive case -> the part where the function calls itself.

int factorial (int n, int depth=0)
{
    //base case 
    if (n<=1) {
        cout << "Depth " << depth << " : Returning 1"<< endl;
        return 1;
    }else{
        cout << "Depth " << depth << " : Calculating factorial("<<n<< ") " << n << " * factorial("<<n-1<< ")"<<endl;
        int result = n * factorial(n-1, depth+1);
        cout << "Depth "<< depth << " :Result of factorial (" << n << ") = " << result << endl;
        return result;   //recursive case
    }

}

int main()
{
    int number, x;
    cout << "Enter a number: ";
    cin >> number;
    x = factorial(number);
    cout << "Factorial of " << number << " is " << x << endl;
    return 0;
}

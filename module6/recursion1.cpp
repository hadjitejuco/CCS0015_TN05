/******************************************************************************
factorial of a number
Enter n: 5
Factorial of 5 is 120 

*******************************************************************************/
//recursion
#include <iostream>
using namespace std;
//function

int factorial (int n);

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}

//Base case -> condition set under the function to make the stop
// Recursive case -> the part where the function calls itself.

int factorial (int n)
{
    if (n <= 1) return 1;   //base case
    else return n * factorial(n-1);  //recursive case 
}









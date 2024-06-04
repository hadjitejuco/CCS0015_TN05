/******************************************************************************

create a program to solve for the factorial of a number 
Enter n: 5
   1*2*3*4*5 = 120 
   Interation 1: result = 1*1 = 1
   Interation 2: result = 1*2 = 2
   Interation 3: result = 2*3 = 6
   Interation 4: result = 6*4 = 24
   Interation 5: result = 24*5 = 120
*******************************************************************************/
//iteration
#include <iostream>
using namespace std;
int factorial (int n);

int main()
{
    int number, x;
    cout << "Enter number : ";
    cin >> number;
    x = factorial(number); //5
    cout << "Factorial of " << number << " is " << x << endl;
    return 0;
}

int factorial (int n)
{
    int result = 1;
    for (int i = 1; i<=n ; i++){
        cout << "\nIteration " << i << " : result = " << result << " * " << i << " = " << result * i<<endl;
        result *= i;
    }
    return result;
}











/******************************************************************************
fibonacci series
*******************************************************************************/

#include <iostream>
using namespace std;

int fibonacci(int n, int depth = 0) {
    //base case
    if (n<=1)
    {
        cout << "Depth " << depth << ": Returning " << n << endl;
        return n;
        
    }else {
        cout <<  "Depth " << depth << " :Calculating Fibo("<< n <<"): Fibo("<< n-1 << ") + fibo("
        << n - 2 << ")" << endl;
        int fib1 = fibonacci(n-1, depth + 1);
        int fib2 = fibonacci(n-2, depth + 1);
        int result = fib1+fib2;
        cout << "Depth "<< depth<< ": Result of fibo(" << n << ") = result"<< endl;
        return result;
    }    
    
    
}

int main()
{
    int terms;
    cout << "Enter number of terms: "; 
    cin >> terms;
    for (int i =0; i<terms;i++) {
        cout << "fibonacci (" << i << ") = "  << fibonacci(i) << endl;
    }

    return 0;
}

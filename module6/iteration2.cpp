/******************************************************************************
fibonacci using iteration
*******************************************************************************/

#include <iostream>
using namespace std;
void fibonacci(int terms);
int main()
{
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    fibonacci(terms);
    return 0;
}
void fibonacci(int terms)
{
    int a = 0, b = 1, next;
    for (int i = 0; i < terms; i++){
        cout << "Terms " << i << " : " << a << endl;
        next = a+b;
        a=b;
        b=next;
    }
    
}

/******************************************************************************
using library to implement a stack 
include the <stack>
//size(), push(), pop(), top()
*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int x, i;
    stack<int> nums;
    cout << "Size of the stack: " << nums.size() << endl;
    nums.push(11); // parameter 
    nums.push(12);
    nums.push(13);
    cout << "Size of the stack: " << nums.size() << endl;
    cout << "top value: " << nums.top() << endl;
    //remove the values individually
    // nums.pop(); 
    // cout << "Size of the stack: " << nums.size() << endl;
    // cout << "top value: " << nums.top() << endl;
    //place loop

    for (i=nums.size(); i>0; i--){
        x=nums.top();
        cout << x << endl;
        nums.pop();
    }
    cout << "Size of the stack: " << nums.size() << endl;
    return 0;
}

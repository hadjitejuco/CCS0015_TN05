/******************************************************************************
using library to implement a stack 
include the <stack>
//size(), push(), pop(), top(), empty()
*******************************************************************************/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<string> name;
    string n;
    char quest;
    cout << "Enter data y/n? ";
    cin >> quest;
    while (quest =='Y' || quest=='y'){
        cout << "Enter name: ";
        cin >> n;
        name.push(n);
        cout << "Try again y/n? ";
        cin >> quest;
    }
    cout << "size of the stack: " << name.size() << endl;
    while(!name.empty()){
        cout << name.top() << endl;
        name.pop();
    }
    cout << "size of the stack: " << name.size() << endl;
    return 0;
}

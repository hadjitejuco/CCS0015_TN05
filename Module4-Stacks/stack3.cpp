/******************************************************************************
using library to implement a stack 
include the <stack>
//size(), push(), pop(), top(), empty()
menu
*******************************************************************************/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> x;
    int choice, item;
    while(1){
        cout << "------------------------------\n";
        cout << "STACK Implementation using STL"<<endl;
        cout << "------------------------------\n";
        cout << "1. Insert (push)"<< endl;
        cout << "2. Delete (pop) " << endl;
        cout << "3. Count (size) " << endl;
        cout << "4. Top "<< endl;
        cout << "5. Exit " << endl;
        cout << "------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: 
                cout << "Enter number to insert: ";
                cin >> item;
                x.push(item);
                break;
            case 2: 
                item = x.top();
                x.pop();
                cout << "Element " << item << " Deleted "<< endl;
                break;
            case 3: 
                cout << "Size of Stack " << x.size() <<endl;
                break;
            case 4: 
                cout << "Top element in the stack " << x.top() << endl;
                break;
            case 5: 
                exit(1);
                break;
            default:
                cout << "Wrong Choice " << endl;
            
        }
    }
    return 0;
}

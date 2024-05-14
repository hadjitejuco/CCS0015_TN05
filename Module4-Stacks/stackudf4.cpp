/******************************************************************************
UDF of a stack
*******************************************************************************/
#include <iostream>
//define the size 
#define STACK_SIZE 5
using namespace std;

int stackNum[STACK_SIZE]; //array 
int top = -1; //empty



//prototype
void push(int);
void pop();
void display();
void clear();


int main()
{
    int choice, num;
    while(1){
        cout << "------------------------------\n";
        cout << "STACK Implementation using UDF"<<endl;
        cout << "------------------------------\n";
        cout << "1. Insert (push)"<< endl;
        cout << "2. Delete (pop) " << endl;
        cout << "3. Display " << endl;
        cout << "4. Clear "<< endl;
        cout << "5. Exit " << endl;
        cout << "------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: 
                cout << "Enter number: ";
                cin >> num;
                push(num);
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
                break;
            case 4: 
                clear();
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


void push(int n)
{
    //check if the stack is full 
    if (top==STACK_SIZE-1)
        cout << "Stack is Full ... "<<endl;
    else
        stackNum[++top]=n;

}
void pop()
{
    if (top==-1)
        cout << "stack is empty " << endl;
    else
        cout << "You pop the value " << stackNum[top--]<<endl; 
    
}
void display()
{
    if (top==-1)
        cout << "Stack is empty " << endl;
    else
        for (int i=top; i>=0; i--)
            cout << stackNum[i] << endl;
    
}

void clear()
{
    top = -1;
    
}


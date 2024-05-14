/******************************************************************************

Simple Banking System
//static implementation

add transaction
-> positive deposit, negative withdrawal 
delete transaction
show last transaction
display all transaction
exit 

*******************************************************************************/

#include <iostream>
using namespace std;

//set the size of our array 
const int SIZE = 5;
int transcationStack[SIZE];
int top = -1;

void push(int);
int pop();
int peek();
void display();

int main()
{
    int choice, amount;
    while (1){
        
        cout << "Banking System"<< endl;
        cout << "1. Add Transaction "<< endl;
        cout << "2. Undo Transaction "<< endl;
        cout << "3. Show last transaction "<<endl;
        cout << "4. Show all transaction " << endl;
        cout << "5. Exit "<< endl;
        cout << "Enter your choice ";
        cin >> choice;
        switch (choice){
            case 1: 
                cout << "Enter transaction amount (positive deposit/negative withdraw)"<<endl;
                cin >> amount;
                push(amount);
                break;
            case 2: 
                amount = pop();
                if (amount != -1 ){
                    cout << "Transaction undone " << amount << endl;
                }
                break;
            case 3: 
                amount = peek();
                if (amount != -1 ){
                    cout << "Last Transaction " << amount << endl;
                }
                break;
            case 4: 
                display();
                break;
            case 5: 
                exit(1);
                break;
            default:
                cout << "Invalid choice "<< endl;
            
        }
        
    }

    return 0;
}

void push(int transcation)
{
    if (top==SIZE-1) {
        cout << "Error Transcation is full " << endl;
    }else{
        transcationStack[++top] = transcation;
        cout << "Transaction added " << transcation << endl;
    }

    
}
int pop()
{
    if (top == -1) {
        cout << "No transaction to be undone " << endl;
        return -1;
    }else{
        return transcationStack[top--];
    }
    
}
int peek()
{
    if (top == -1) {
        cout << "No transcation available " << endl;
        return -1;
    }else{
        return transcationStack[top];
    }
    
}
void display()
{
    if (top == -1) {
        cout << "No transaction to display " << endl;
    }else {
        cout << "Display all transcation "<< endl;
        for (int i = top; i>=0; i--){
            cout << (i+1) << ". " << transcationStack[i] << endl;
        }
    }
}



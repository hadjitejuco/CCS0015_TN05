/******************************************************************************
UDF of a stack using linked list
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//structure
struct node {
    int data;
    node *next;
}*top;


void push(int);
void pop();
void display();


int main()
{
    int choice, num;
    while(1){
        cout << "------------------------------\n";
        cout << "STACK Implementation using LL"<<endl;
        cout << "------------------------------\n";
        cout << "1. Insert (push)"<< endl;
        cout << "2. Delete (pop) " << endl;
        cout << "3. Display " << endl;
        cout << "4. Exit " << endl;
        cout << "------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: 
                cout << "Enter number: ";
                cin >> num;
                push(num);
                display();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
                break;
            case 4: 
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
    node *p = new node;
    p -> data=n;
    if (top==NULL)
        p->next=NULL;
    else
        p->next=top;
    top=p;
}


void pop()
{
    if (top==NULL)
        cout << "stack is empty " << endl;
    else
        {
            
            node *tmp = top;
            cout << "You pop the value " << top->data << endl;
            top = top->next;
            tmp->next=NULL;
            delete(tmp);
        }
}

void display()
{
    node *p;
    if (top==NULL)
        cout << "Nothing to display " << endl;
    else
    {
        cout << "Stack element \n";
        cout << setw(10) << "POINTER "
             << setw(20) << "VALUE "
             << setw(20) << "NEXT "
             << endl;
             
        p=top;
        while(p!=NULL){
            cout << setw(10) << p
                << setw(15) << p->data
                << setw(20) << p->next
                << endl;
            p=p->next;            
        }
    }
}



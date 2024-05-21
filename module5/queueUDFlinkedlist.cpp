/******************************************************************************
UDF Queue 
DYNAMIC 
Linked List 
   pointer.   value.   next. 
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

struct node {
    int data;
    node *next;
};


//function prototype
//enqueue -> push 
void enqueue(int);
//dequeue -> pop 
void dequeue();
//display()
void display();

node *front = NULL;     //head 
node *rear= NULL;       //tail     

int main()
{
    while(1) {
        int choice;
        cout << " MENU using Linked List "<<endl;
        cout << "1. Enqueue \n";
        cout << "2. Dequeue \n";
        cout << "3. Display \n";
        cout << "4. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1: 
                int num;
                cout << "Enter a number to enqueue ";
                cin >> num;
                enqueue(num);
                display();
                break;
            case 2: 
                dequeue();
                display();
                break;
            case 3: 
                display();
                break;
            case 4: 
                exit(1);
            default:
                cout << "Invalid choice \n";
            
        }
        cout << endl;
    }
    return 0;
}
//enqueue -> push
//if its full -> queue is overflow 

//head(FRONT) and the tail(REAR) 
// int front = -1;
// int rear = -1;
void enqueue(int n)
{
   node *tmp = new node;
   tmp -> data = n;
   tmp -> next = NULL;
   if (front==NULL) {
       front = tmp;
       rear = tmp;
       return;
   }
   rear->next = tmp;
   rear=tmp;
}
//dequeue -> pop 
void dequeue()
{

    node *tmp;
    tmp=front;
    if (front!=NULL)
    {
        cout << "You dequeue the value: " << front->data << endl;
        front = front->next;
        delete(tmp);
    }else
        cout << "Queue is empty \n";





}
//display()
void display()
{
    node *p;
    if (front==NULL)
        cout << "Nothing to display \n";
    else{
        cout << "Values \n";
        cout << setw(10) << "POINTER" << setw(20) << "VALUE" << setw(10) << "NEXT" << endl;
        p = front;
        while (p != NULL) {
            cout << setw(10) << p 
                << setw(20) << p->data
                << setw(20) << p->next 
                << endl;
            p=p->next;
        }
    }
}

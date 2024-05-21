/******************************************************************************
UDF Queue 
STATIC -> Define array size 
*******************************************************************************/
#include <iostream>
#define QUEUE_SIZE 5
using namespace std;

int queueArr[QUEUE_SIZE];
int front = -1;
int rear = -1;

//function prototype
//enqueue -> push 
void enqueue(int);
//dequeue -> pop 
void dequeue();
//display()
void display();

int main()
{
    while(1) {
        int choice;
        
        cout << "MENU"<<endl;
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
    if (rear < QUEUE_SIZE-1) {
        //push
        if (front == -1)
            front++;
        queueArr[++rear] = n;
    }
    else
        cout << "Queue is overflow \n";

}
//dequeue -> pop 
void dequeue()
{
    if (rear<front || front==-1)
    {
        cout << "Queue is empty ";
        front = 0;
        rear = -1;
    }
    else
        cout << "Dequeue value " << queueArr[front++];
    
}
//display()
void display()
{
    //rear and front >rear empty 
    if (rear==-1 || front>rear) 
        cout << "Queue is empty";
    else
        for (int i=front; i<=rear; i++)
            cout << "[" << i << "] :" << queueArr[i] << endl;
    
    
}












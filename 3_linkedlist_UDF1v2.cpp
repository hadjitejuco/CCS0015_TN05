/******************************************************************************

UDF - Linked List 
//createList
//AddBegin
//Display

*******************************************************************************/

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

node *start;

//functions
void createList(int d);
void addBegin(int d);
void display();

int main()
{
    start = NULL;
    int n,m;
    //int array[6];
    //create list (ask the user how many nodes);
    display();
    cout << "How many nodes you want: ";
    cin >> n;
    for (int i=0; i<n;i++){
        cout << "Enter the elements: ";
        cin >> m;
        createList(m);
    }
    
    display();
    // addBegin(10);
    // display();
    
    return 0;
}

void createList(int d)
{
    node *q, *tmp;
    tmp = new node;
    tmp -> data = d;
    tmp -> next = NULL;
    if (start==NULL) {
        start = tmp;
    }else{
        q = start;
        while (q->next!=NULL)
            q=q->next;
        q->next = tmp;
    }
    
}
void addBegin(int d)
{
   node *tmp;
   tmp = new node;
   tmp -> data = d;
   tmp -> next = start;
   start = tmp;
   
}

// void display()
// {
//     node *q;
//     if (start==NULL) {
//         cout << "\nList is Empty \n";
//         return;
//     }
//     q=start;
//     cout << "\nList values ";
//     while (q!=NULL)
//     {
//         cout << q->data<< " ";
//         q=q->next;
//     }
//     cout << endl;
    
// }

void display()
{
    node *q;
    if (start==NULL) {
        cout << "\nList is Empty \n";
        return;
    }
    q=start;
    cout << "\nList values and memory address " << endl;
    while (q!=NULL)
    {
        cout << q->data<< " (" << q << ") ";
        q=q->next;
    }
    cout << endl;
    
}







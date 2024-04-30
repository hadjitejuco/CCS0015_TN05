/******************************************************************************
Linked List Operations

1. front() - return the first element in the list
2. empty()
3. back() - return the last element in the list
4. push_front() - add new element (g) at the beginning of the list
5. push_back() - add a new element (g) at the end of the list
6. pop_front() - removes the first element in the list - reduces the size of the list 1
7. pop_back() - remove the last element in the list - reduces the size of the list 1
8. insert() - insert new element in the list at a specified position
9. size() - gets the size of the list
10. begin() -  returns an iterator pointing to the first element
11. end() - returns the last element
*******************************************************************************/

#include <iostream>
#include <list>
#include <iterator> //insert()
using namespace std;
void display(const list<int> &lst);
int main()
{
   list<int> myList;
   int choice, value, position;
   
   do {
        cout << "\nMENU\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Front\n";
        cout << "5. Insert by Position\n";
        cout << "6. Show Front\n";
        cout << "7. Show Back\n";
        cout << "8. Display All\n";
        cout << "9. Show size\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 0:
                cout << "Exit Program\n";
                break;
            case 1:
                cout << "Enter an integer to push at front: ";
                cin >> value;
                myList.push_front(value);
                break;
            case 2:
                cout << "Enter an integer to push at back: ";
                cin >> value;
                myList.push_back(value);
                break;
            case 3:
                //check !empty() list
                if (!myList.empty()) {
                    myList.pop_front();
                    cout << "First element removed. \n";
                }else {
                    cout << "List is empty, nothing to pop \n";
                }
                break;
            case 4:
                 //check !empty() list
                if (!myList.empty()) {
                    myList.pop_back();
                    cout << "Last element removed. \n";
                }else {
                    cout << "List is empty, nothing to pop \n";
                }
                break;
            case 5:
                //value to Insert
                //position to insert
                cout << "Enter an integer to insert  ";
                cin >> value;
                cout << "enter position to insert: (0 for the beginning): ";
                cin >> position;
                if (position <= myList.size()) {
                    auto it = myList.begin();
                    advance(it, position);
                    myList.insert(it, value);
                }else{
                    cout << "Position out of bounds: \n";
                }
                break;
            case 6:
                //display 
                if (!myList.empty()) {
                    cout << "Front Element is " << myList.front() << endl;
                }else{
                    cout << "List is empty\n";
                }
                break;
            case 7:
                //display 
                if (!myList.empty()) {
                    cout << "Back Element is " << myList.back() << endl;
                }else{
                    cout << "List is empty\n";
                }
                break;    
            case 8:
                display(myList);
                break;
            case 9:
                cout << "Size of the list: "<< myList.size()<<endl;
                break;
            default:
                cout << "Invalid input\n";
                break;
            
        }
   }while(choice !=0 );

    return 0;
}

void display(const list<int> &lst)
{
    if (lst.empty()){
        cout << "List is empty "<< endl;
    }else {
        cout << "List content ";
        for (int num : lst) {
            cout << num << " ";
        }
        cout << endl;
    }
}

















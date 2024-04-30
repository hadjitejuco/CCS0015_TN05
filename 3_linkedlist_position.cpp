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

int main()
{
    list<int> myList = {10,20,30,40,50};
    int position;
    
    cout << "Contents of Mylist"<< endl;
    for (int num : myList) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Enter the position to display (0 base index): ";
    cin >> position;
    
    if (position < 0 || position >= myList.size()) {
        cout << "Invalid position " << endl;
        return 1;
    }
    
    list<int>::iterator it = myList.begin();
    advance(it,position);
    cout << "Element at position " << position <<  " is " << *it << endl;

    return 0;
}



















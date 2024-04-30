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
    //front and back()
    // list<int> myList = {10,20,30};
    // if (!myList.empty()){
    //     cout << "First Element " << myList.front() << endl;
    //     cout << "Last Element " << myList.back() << endl;
    // }

    //insert/add
    //10
    // list<int> myList;
    // myList.push_front(10);
    // myList.push_front(20);
    // myList.push_back(40);
    // myList.push_back(50);
    // for (int num : myList) {
    //     cout << num << " ";
    // }

    //remove elements into the list
    //list<int> myList = {10,20,30};
    // myList.pop_front();
    // for (int num : myList) {
    //     cout << num << " ";
    // }
    
    
    // myList.pop_back();
    //  for (int num : myList) {
    //     cout << num << " ";
    // }


    //insert -> auto is a type specifier which can base used in place to a type name 
    //insert -> advance(it, position) 
    
    // list<int> myList = {10,20,30};
    // list<int>::iterator it = myList.begin();
    // advance(it, 0); //move iterator to the second position
    // myList.insert(it, 15);
    // for (int num : myList) {
    //     cout << num << " ";
        
    // }
    // cout << endl;
    // cout << "Size of List() " << myList.size()<<endl;

    // list<int> myList = {10,20,30};
    // for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it){
    //     cout << *it << " ";
        
    // }
    return 0;
}

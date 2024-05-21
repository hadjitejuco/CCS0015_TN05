/******************************************************************************
Library
    queue 
        input -> enqueue -> push(n)
        remove -> dequeue -> (pop)
        front element -> front()
        last element -> back()
        size of the queue -> size()
        empty()
        
*******************************************************************************/

#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    //create a queue
    queue<string> students;
    string studname;
    char quest;
    cout << "Enter data y/n? ";
    cin >> quest;
    while(quest=='Y' || quest=='y'){
       
        cout << "Enter student name : ";
        cin >> studname;
        students.push(studname);
        
        cout << "Enter data y/n? ";
        cin >> quest;
    }
    cout << endl;
    cout << "Front element " << students.front() <<endl;
    cout << "Last Element " << students.back() << endl;
    cout << "Size of Queue "<< students.size() << endl;
    
    //remove
    while(!students.empty()) {
        cout << "popped data: " << students.front() << endl;
        students.pop();
    }
    cout << "Size of Queue "<< students.size() << endl;
    return 0;
}

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
using namespace std;
int main()
{
    //create a queue
    queue<int> grade;
    int n;
    char quest;
    cout << "Enter data y/n? ";
    cin >> quest;
    while(quest=='Y' || quest=='y'){
        cout << "Enter a grade: ";
        cin >> n;
        grade.push(n);
        
        cout << "Enter data y/n? ";
        cin >> quest;
    }
    cout << endl;
    cout << "Front element " << grade.front() <<endl;
    cout << "Last Element " << grade.back() << endl;
    cout << "Size of Queue "<< grade.size() << endl;
    
    //remove
    while(!grade.empty()) {
        cout << grade.front() << endl;
        grade.pop();
    }
    cout << "Size of Queue "<< grade.size() << endl;
    return 0;
}

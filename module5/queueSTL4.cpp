/******************************************************************************
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
    queue<int> q;
    int choice, item;
    
    while(1) {
        cout << "MENU\n";
        cout << "1. Enqueue \n";
        cout << "2. Dequeue \n";
        cout << "3. Size of the Queue \n";
        cout << "4. Front Element \n";
        cout << "5. Last Element \n";
        cout << "6. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: 
                cout << "Enter a value to insert: ";
                cin >> item;
                q.push(item);
                break;
            case 2: 
                //point to the front()
                item = q.front();
                q.pop();
                cout << "Element " << item << " Deleted" << endl;
                break;
            case 3: 
                cout << "Size of Queue ";
                cout << q.size()<<endl;
                break;
            case 4: 
                cout << "Front element ";
                cout << q.front() << endl;
                break;
            case 5: 
                cout << "Back element in the queue ";
                cout << q.back() << endl;
                break;
            case 6: 
                exit(1);
            default:
                cout << "Invalid Choice: ";
        }
        cout << endl;
    }
    return 0;
}

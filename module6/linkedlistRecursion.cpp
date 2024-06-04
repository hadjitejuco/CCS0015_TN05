#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};


void insertAtEnd(Node*& head, int data) {
    if (head == nullptr) {
        head = new Node(data);
    } else {
        insertAtEnd(head->next, data);
    }
}


void printList(Node* head) {
    if (head == nullptr) {
        cout << endl;
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}


void deleteNode(Node*& head, int key) {
    if (head == nullptr) return;
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    deleteNode(head->next, key);
}


int countNodes(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    return 1 + countNodes(head->next);
}


void displayMenu() {
    Node* head = nullptr;
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at end\n";
        cout << "2. Print list\n";
        cout << "3. Delete node\n";
        cout << "4. Count nodes\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insertAtEnd(head, value);
                break;
            case 2:
                cout << "Linked List: ";
                printList(head);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(head, value);
                break;
            case 4:
                cout << "Number of nodes: " << countNodes(head) << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}

int main() {
    displayMenu();
    return 0;
}

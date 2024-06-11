#include <iostream>
#define MAX 1000
using namespace std;

class BST {
private:
    int left[MAX];
    int right[MAX];
    int key[MAX];
    int root;
    int nextFree;

public:
    BST() {
        root = -1;
        nextFree = 0;
    }

    void insert(int value) {
        if (nextFree >= MAX) {
            cout << "Tree is full" << endl;
            return;
        }
        key[nextFree] = value;
        left[nextFree] = -1;
        right[nextFree] = -1;

        if (root == -1) {
            root = nextFree;
        } else {
            int current = root;
            int parent;
            while (current != -1) {
                parent = current;
                if (value < key[current]) {
                    current = left[current];
                } else {
                    current = right[current];
                }
            }
            if (value < key[parent]) {
                left[parent] = nextFree;
            } else {
                right[parent] = nextFree;
            }
        }
        nextFree++;
    }

    void inorder(int index) {
        if (index == -1) return;
        inorder(left[index]);
        cout << key[index] << " ";
        inorder(right[index]);
    }

    void preorder(int index) {
        if (index == -1) return;
        cout << key[index] << " ";
        preorder(left[index]);
        preorder(right[index]);
    }

    void postorder(int index) {
        if (index == -1) return;
        postorder(left[index]);
        postorder(right[index]);
        cout << key[index] << " ";
    }

    int search(int value) {
        int current = root;
        while (current != -1 && key[current] != value) {
            if (value < key[current]) {
                current = left[current];
            } else {
                current = right[current];
            }
        }
        return current;
    }

    void deleteNode(int value) {
        root = deleteRec(root, value);
    }

    int deleteRec(int root, int value) {
        if (root == -1) return root;

        if (value < key[root]) {
            left[root] = deleteRec(left[root], value);
        } else if (value > key[root]) {
            right[root] = deleteRec(right[root], value);
        } else {
            if (left[root] == -1) {
                int temp = right[root];
                return temp;
            } else if (right[root] == -1) {
                int temp = left[root];
                return temp;
            }

            int temp = minValueNode(right[root]);
            key[root] = key[temp];
            right[root] = deleteRec(right[root], key[temp]);
        }
        return root;
    }

    int minValueNode(int node) {
        int current = node;
        while (left[current] != -1) {
            current = left[current];
        }
        return current;
    }

    void displayTree() {
        cout << "Inorder: ";
        inorder(root);
        cout << endl;
        cout << "Preorder: ";
        preorder(root);
        cout << endl;
        cout << "Postorder: ";
        postorder(root);
        cout << endl;
    }
};

void displayMenu() {
    cout << "Binary Search Tree Operations Menu:" << endl;
    cout << "1. Insert a node" << endl;
    cout << "2. Delete a node" << endl;
    cout << "3. Search for a node" << endl;
    cout << "4. Display tree (Inorder, Preorder, Postorder)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    BST tree;
    int choice, value;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            tree.insert(value);
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            tree.deleteNode(value);
            break;
        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            if (tree.search(value) != -1) {
                cout << "Value " << value << " found in the tree." << endl;
            } else {
                cout << "Value " << value << " not found in the tree." << endl;
            }
            break;
        case 4:
            tree.displayTree();
            break;
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

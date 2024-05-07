#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Video {
    string title;
    int id;
    double price;
    bool isRented;
    Video* next;
};

Video* head = nullptr;
double totalSales = 0.0;

void addVideo(string title, int id, double price);
void deleteVideo(int id);
void rentVideo(int id);
void returnVideo(int id);
void displayVideos();
void showMenu();
void calculateTotalSales();
int main() {
    int choice, id;
    string title;
    double price;
    
    while (true) {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter title";
                cin.ignore();
                getline(cin, title);
                cout << "Enter ID of the video: ";
                cin >> id;
                
                cout << "Enter price of the video: ";
                cin >> price;
                addVideo(title, id, price);
                break;
            case 2:
                displayVideos();
                cout << "Enter ID of the video to rent: ";
                cin >> id;
                rentVideo(id);
                break;
            case 3:
                displayVideos();
                cout << "Enter ID of the video to return: ";
                cin >> id;
                returnVideo(id);
                break;
            case 4:
                displayVideos();
                break;
            case 5:
                cout << "Total sales: " << totalSales << endl;
                break;
            case 6:
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}

void showMenu() {
    cout << "1. Add Video\n";
    cout << "2. Rent Video\n";
    cout << "3. Return Video\n";
    cout << "4. Display Videos\n";
    cout << "5. Show Total Sales\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

void addVideo(string title, int id, double price) {
    Video* newVideo = new Video{title, id, price, false, nullptr};
    if (head == nullptr) {
        head = newVideo;
    } else {
        Video* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newVideo;
    }
    cout << "Video added successfully!\n";
}
void rentVideo(int id) {
    Video* current = head;
    while (current != nullptr) {
        if (current->id == id && !current->isRented) {
            current->isRented = true;
            totalSales += current->price;
            cout << "Video rented: " << current->title << endl;
            return;
        }
        current = current->next;
    }
    cout << "Video not found or already rented.\n";
}
void returnVideo(int id) {
    Video* current = head;
    while (current != nullptr) {
        if (current->id == id && current->isRented) {
            current->isRented = false;
            cout << "Video returned: " << current->title << endl;
            return;
        }
        current = current->next;
    }
    cout << "Video not found or not rented.\n";
}
void displayVideos() {
    Video* current = head;
    cout << left << setw(10) << "ID" << setw(30) << "Title" << setw(10) << "Price" << setw(15) << "Status" << endl;
    while (current != nullptr) {
        cout << setw(10) << current->id << setw(30) << current->title
        << setw(10) << current->price << setw(15) << (current->isRented ? "Rented" : "Available") << endl;
        current = current->next;
    }
}

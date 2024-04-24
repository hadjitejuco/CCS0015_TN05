#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Video {
	int id;
	string title;
	bool isAvailable;
	
	Video() : id(0), title(""), isAvailable(false){}
};
//set max number of videos can handle
const int MAX_VIDEOS = 100;

//function prototyping
void addVideo(Video *videos, int &currentCount);
void updateVideo(Video *videos, int count);
void displayVideos(const Video *videos, int count);
void deleteVideo(Video *videos, int &count);
void saveVideos(const Video *videos, int count);
void loadVideos(Video *videos, int &count);

int main() {
	Video *videos = new Video[MAX_VIDEOS];
	int currentCount = 0;
	
	loadVideos(videos, currentCount); // load the videos from the file 
	
	int choice;
	bool running = true;
	
	while(running){
		//display our menu
		cout << "\nHJT Video Rental System\n";
		cout << "1.  Add video \n";
		cout << "2.  Update Video \n";
		cout << "3.  Display all the video\n";
		cout << "4.  Delete Video\n";
		cout << "5.  Save the video\n"; 	
		cout << "6.  Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch (choice) {
			case 1:
				addVideo(videos, currentCount);
				break;
			case 2:
				updateVideo(videos, currentCount);
				break;
			case 3:
				displayVideos(videos, currentCount);
				break;
			case 4:
				deleteVideo(videos, currentCount);
				break;
			case 5:
				saveVideos(videos, currentCount);
				break;
			case 6:
				//exit
				running = false;
				cout << "Exit program"<<endl;
				break;
			default:
				cout << "Invalid choice " << endl;
		}
		
	}
	delete[] videos; //free up memory 
	return 0;
}

void addVideo(Video *videos, int &currentCount){
	//check if we have reach the max number of videos
	//max_count = 100 - max count
	if (currentCount >= MAX_VIDEOS) {
		cout << "MAX video limit reached..."<<endl;
		return;
	}
	//input the data
	//int id; string title; bool isAvailable;
	cout << "Enter Video ID: ";
	cin >> videos[currentCount].id;
	cout << "Enter Video Title: ";
	cin.ignore(); //clear the input buffer
	getline(cin, videos[currentCount].title);
	videos[currentCount].isAvailable = true; //always true new
	currentCount++;
	cout << "Video Added successfully "<< endl;
}
void updateVideo(Video *videos, int count)
{
	int id, index = -1;
	cout << "Enter video ID to update: ";
	cin >>id;
	for (int i = 0; i<count;i++){
		if (videos[i].id == id) {
			index = i;
			break;
		}
	}
	
	if (index != -1) {
		cout << "Enter new title ";
		cin.ignore();
		getline(cin, videos[index].title);
		cout << "Update available (1 for available 0 for not): ";
		cin >> videos[index].isAvailable;
		cout << "Video Updated "<< endl;
	}else{
		cout << "video not found" <<endl;
	}

}
void displayVideos(const Video *videos, int count)
{
	cout << "Display all videos "<< endl;
	for (int i = 0; i < count; i++) {
		//int id; string title; bool isAvailable;
		cout << "ID: " << videos[i].id << endl;
		cout << "Title "<<  videos[i].title << endl;
		cout << "Available "<< (videos[i].isAvailable ? "YES" : "NO") << endl;
	}
}

void deleteVideo(Video *videos, int &count)
{
	int id, index = -1;
	cout << "Enter video ID to delete: ";
	cin >>id;
	for (int i = 0; i<count;i++){
		if (videos[i].id == id) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		for (int j = index; j < count -1; j++){
			videos[j] = videos[j+1];
		}
		count--;
		cout <<"Video successfully deleted "<< endl;
	}else{
		cout << "video not found" <<endl;
	}

}

void saveVideos(const Video *videos, int count)
{
	ofstream outFile ("videos.txt");
	if (!outFile) {
		cout << "Error opening the file for writing "<< endl;
		return ;
	}
	
	for (int i = 0 ; i<count; i++) {
		outFile << videos[i].id  << "\n" << videos[i].title << "\n" << videos[i].isAvailable << endl;
	}
	outFile.close();
	cout << "Video record save successfully. " << endl;
}

void loadVideos(Video *videos, int &count)
{
	ifstream inFile("videos.txt");
	if (!inFile) {
		cout << "No existing data found. starting fresh... "<< endl;
		return;
	}
	Video temp;
	while(inFile >> temp.id){
		inFile.ignore(); // ignore the newline after the ID
		getline(inFile, temp.title);
		inFile >> temp.isAvailable;
		inFile.ignore(); //newline is ignore 
		if (count < MAX_VIDEOS) {
			videos[count++] = temp;
		}
	}
	inFile.close();
	cout << "Videos loaded successfully.. "<< endl;
	
}

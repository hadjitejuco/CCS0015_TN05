//structure and pointer

#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

int main() {
	Point p1 = {10,20};
	Point *ptr = &p1;
	cout << "Coordinates x and y "<< ptr -> x << ", " << ptr->y << endl;
	ptr->x=30;
	cout << "New Coordinates x and y "<< ptr -> x << ", " << ptr->y << endl;
	return 0;
}

//classes and pointers

#include <iostream>
using namespace std;
//class
class Rectangle {
public:
		int width, height;
		Rectangle (int w, int h) : width(w), height(h) {}
		int area() {
			return width * height;
		}
};

int main() {
	Rectangle rect(10,5);
	Rectangle *ptr = &rect;
	cout << "Rectangle area " << ptr->area() << endl;
	ptr->width=20;
	cout << "New Rectangle area " << ptr->area() << endl;
	return 0;
}

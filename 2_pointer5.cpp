//basic pointers with functions
//swapping functions
#include <iostream>
using namespace std;
//swap
void swap(int *a, int *b);

int main() {
	int x = 10, y =20;
	cout << "values before we swapped  " << x << " "<< y << endl;
	swap(&x,&y);
	cout << "new values  " << x << " "<< y << endl;
	return 0;
	
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

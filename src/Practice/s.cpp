#include <iostream>
using namespace std;

class S{
	public:
		int x;
	public:
		S(int xx) : x(xx) {}
		S(const S& a) { x = a.x ; x++;}
		void operator = (const S& a1) {x = a1.x ; x--;}
};

int main() {
	// your code goes here
	S a(4);
	S b = a;
	cout << b.x << endl;
	return 0;
}
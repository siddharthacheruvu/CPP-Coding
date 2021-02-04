#include <iostream>
using namespace std;

class S{
	public:
        explicit S(char ch, int n = 1) {}
        S(const char *p) {}
	private:
        void operator = (const char*) {}
};

int main() {
	// your code goes here
	S x = "aaa";
	return 0;
}
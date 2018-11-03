#include <iostream>
using namespace std;

void F(int& a) {
	cout << "f_int_a: " << a << endl;
}

void F(int&& a) {
	cout << "f_int&&_a:" << a << endl;
}

template<class A>
void G(A &&a) {
	return F(std::forward<A>(a));
	//return F(a);
}

int main() {
	int i = 2;
	G(i);
	G(5);
}


#include <iostream>

namespace A {
	void print() {
		std::cout << "space A" << std::endl;
	}
}

namespace B {
	void print() {
		std::cout << "space B" << std::endl;
	}
}

int main() {
	A::print();
	B::print();

	return 0;
}

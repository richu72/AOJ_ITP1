#include<iostream>
#include<iomanip>

int main() {
	int a = 0;
	int b = 0;
	char op = 0;
	int X = 0;

	for (int i = 0; i < 100; i++) {

		std::cin >> a >> op >> b;
		if (op == '+') {
			X = a + b;
		}
		else if (op == '-') {
			X = a - b;
		}
		else if (op == '*') {
			X = a * b;
		}
		else if (op == '/') {
			X = a / b;
		}
		else if (op == '?') {
			break;
		}
		std::cout << X << std::endl;
	}		
}
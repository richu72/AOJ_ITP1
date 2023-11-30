#include <iostream>

int main() {
	int a = 0;
	int b = 0;
	int menseki = 0;
	int nagasa = 0;
	std::cin >> a >> b;
	menseki = a * b;
	nagasa = 2 * a + 2 * b;
	std::cout << menseki << " " << nagasa << std::endl;
}
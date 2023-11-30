#include <iostream>
#include <iomanip>

int main() {
	int a, b = 0;
	std::cin >> a >> b;
	int d = a / b;
	int r = a % b;
	double f = (double)a / b;

	std::cout << std::fixed << std::setprecision(8);
	std::cout << d <<" " << r <<" " << f << std::endl;
}
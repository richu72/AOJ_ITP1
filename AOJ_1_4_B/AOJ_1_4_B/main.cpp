#include<iostream>
#include<iomanip>

int main() {
	double r = 0;
	double S = 0;
	double L = 0;
	double pai = 3.141592653589;
	std::cin >> r;

	S = r * r * pai;
	L = 2 * r * pai;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << S << " " << L << std::endl;
}
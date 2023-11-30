#include<iostream>

int main(){
	int y = 1;
	int x = 0;
	std::cin >> x;
	for (int i = 0; i <= 2; i++) {
		y = y * x;
	}
	std::cout << y << std::endl;
}
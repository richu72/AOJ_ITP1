#include<iostream> //std
#include<iomanip>

int main() {
	int H;
	int W;
	for (int k = 0; k < 10000; k++) {
		std::cin >> H >> W;
		if (H == 0 and W == 0) {
			break;
		}
		for (int i = 0; i < H; i++) {
			if(i%2==0){
				for (int j = 0; j < W; j++) {
					if (j % 2 == 0) {
						std::cout << "#";
					}
					else if (j % 2 == 1) {
						std::cout << ".";
					}
				}
			}
			else if (i % 2 == 1) {
				for (int j = 0; j < W; j++) {
					if (j % 2 == 0) {
						std::cout << ".";
					}
					else if (j % 2 == 1) {
						std::cout << "#";
					}
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}
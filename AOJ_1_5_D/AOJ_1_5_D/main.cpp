#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			std::cout << " " << i;
			continue;//for,whileにおいて、後の処理を飛ばして次のループ
		}
		while (x){//(x)は何を表している？
			if(x % 10 == 3){
				std::cout << " " << i;
				break;
			}
			x /= 10; //なんでいる？
		}
	}
	
	std::cout << std::endl;
}

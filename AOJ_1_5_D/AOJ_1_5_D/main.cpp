#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			std::cout << " " << i;
			continue;//for,while�ɂ����āA��̏������΂��Ď��̃��[�v
		}
		while (x){//(x)�͉���\���Ă���H
			if(x % 10 == 3){
				std::cout << " " << i;
				break;
			}
			x /= 10; //�Ȃ�ł���H
		}
	}
	
	std::cout << std::endl;
}

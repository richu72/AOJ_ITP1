#include<iostream> //std
#include<iomanip>

int main() {
	int n = 0;
	int min = 0;
	int max = 0;
	long long sun = 0;
	std::cin >> n;
	int a = 0;
	int X = 0;

	for (int i = 0; i < n; i++) {

		std::cin >> a;
		//min
		if (min >= a or min==0) {
			min = 0;
			min += a;
		}
		else{
		}
		//max
		if (max < a or max==0) {
			max = 0;
			max += a;
		}
		else {
		}
		//sun
		sun += a;
	}

	std::cout << min << " " << max << " " << sun << std::endl;
}
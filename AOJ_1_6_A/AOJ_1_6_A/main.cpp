#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int n;
	cin >> n;
	int a[1000];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < n; j++) {
		int x = n - j;
		if (j == n - 1 ) {
			cout << a[x]<<endl;
		}
		else {
			cout << a[x] << " ";
		}
	}
}
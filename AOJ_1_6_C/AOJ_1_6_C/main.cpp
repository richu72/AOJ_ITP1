#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int n=0;
	int b, f, r;
	int v = 0;
	int home[4][3][10] = { {{}} };
	cin >> n;
	for (int a = 0; a < n; a++) {
		cin >> b >> f >> r >> v;
		home[b - 1][f - 1][r - 1] += v;

	}
	
	//出力処理
	for (int w = 0; w < 4; w++) {
		for (int k = 0; k < 3; k++) {
			for (int m = 0; m < 10; m++) {
				cout << " " << home[w][k][m] ;
			}
			cout << endl;
		}
		//シャープかつ改行
		if (w == 3) {
			break;
		}
		for (int i = 0; i < 20; i++) {
			cout << "#";
		}
		cout << endl;
	}
}
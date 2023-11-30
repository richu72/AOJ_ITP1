#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int r = 0;
	int c = 0;
	int A[100][100] = { {} };
	//入力
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> A[i][j];
		}
	}


	//各行の合計値
	int B[100] = {};//各行の合計
	for (int l = 0; l < r; l++) {
		for (int k = 0; k < c; k++) {
			B[l] += A[l][k];
		}
	}
	//各列の合計
	int C[100] = {};//各列の合計
	for (int l = 0; l < c; l++) {
		for (int k = 0; k < r; k++) {
			C[l] += A[k][l];
		}
	}
	//表全体の合計値
	int D = 0;
	for (int l = 0; l < r; l++) {
		D += B[l];
	}

	//出力
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << A[i][j] << " ";
		}
		cout << B[i] << endl;
	}

	for (int j = 0; j < c; j++) {
		cout << C[j] << " ";
	}
	cout << D << endl;

}
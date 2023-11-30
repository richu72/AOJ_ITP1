#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int n, m, l = 0;
	int A[100][100] = {};
	int B[100][100] = {};
	//入力
	cin >> n >> m >> l;
	for (int i=0; i < n; i++) {
		for (int j=0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i=0; i < m; i++) {
		for (int j=0; j < l; j++) {
			cin >> B[i][j];
		}
	}

	int C[100][100] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	//出力
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			if (j = l - 1) {
				cout << C[i][j];
			}
			if else {
				cout << C[i][j] << " ";
			}
		}
			
		}
		cout << endl;

	}
}
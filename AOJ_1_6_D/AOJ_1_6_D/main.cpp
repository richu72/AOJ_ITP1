#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int A[100][100] = { {} };
	int b[100] = {};
	int n, m = 0;
	//����
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	for (int k = 0; k < m; k++) {
		cin >> b[k];
	}
	

	//�o��
	int Ab[100] = {};
	int c[100] = {};
	for (int l = 0; l < n; l++) {
		for (int z = 0; z < m; z++) {
			Ab[l] = A[l][z] * b[z];
			c[l] += Ab[l];
		}
		cout << c[l]<<endl;
	}
}
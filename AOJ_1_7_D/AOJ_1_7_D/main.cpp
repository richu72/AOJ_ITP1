#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int r = 0;
	int c = 0;
	int A[100][100] = { {} };
	//����
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> A[i][j];
		}
	}


	//�e�s�̍��v�l
	int B[100] = {};//�e�s�̍��v
	for (int l = 0; l < r; l++) {
		for (int k = 0; k < c; k++) {
			B[l] += A[l][k];
		}
	}
	//�e��̍��v
	int C[100] = {};//�e��̍��v
	for (int l = 0; l < c; l++) {
		for (int k = 0; k < r; k++) {
			C[l] += A[k][l];
		}
	}
	//�\�S�̂̍��v�l
	int D = 0;
	for (int l = 0; l < r; l++) {
		D += B[l];
	}

	//�o��
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
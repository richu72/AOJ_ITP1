#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

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
	
	//�o�͏���
	for (int w = 0; w < 4; w++) {
		for (int k = 0; k < 3; k++) {
			for (int m = 0; m < 10; m++) {
				cout << " " << home[w][k][m] ;
			}
			cout << endl;
		}
		//�V���[�v�����s
		if (w == 3) {
			break;
		}
		for (int i = 0; i < 20; i++) {
			cout << "#";
		}
		cout << endl;
	}
}
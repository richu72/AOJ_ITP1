#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int m[50] = {}, f[50] = {}, r[50] = {};
	int n[50] = {};
	int k = 0;
	//����
	for (int i = 0; i < 50; i++) {
		cin >> m[i] >> f[i] >> r[i];

		if (m[i] == -1 and f[i] == -1 and r[i] == -1) {
			break;
		}
		n[i] = m[i] + f[i];
		k = i+1;
	}

	//�o��
	for (int j = 0; j < k;j++) {

		if (m[j] == -1 || f[j] == -1 or n[j] < 30) {
			cout << "F" << endl;
		}
		else if(n[j] >= 80) {
			cout << "A"  << endl;
		}
		else if (n[j] < 80 && n[j] >= 65) {
			cout << "B"  << endl;
		}
		else if (n[j] < 65 && n[j] >= 50 ) {
			cout << "C"  << endl;
		}
		else if (n[j] < 50 && n[j] >= 30) {
			if (r[j] >= 50) {
				cout << "C" << endl;
			}
			else {
				cout << "D" << endl;
			}
		}
		
	}
}
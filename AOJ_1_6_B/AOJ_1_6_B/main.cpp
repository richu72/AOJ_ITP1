#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int n = 0; //�����Ă���J�[�h�̖���
	char ch; //�}�[�N
	int x = 0;//����
	int a = 0;
	int card[4][13] = { {} }; //�z��̂��ׂĂ̒l���O�ɂ���B
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ch >> x;
		if (ch == 'S') {
			a = 0;
			card[a][x - 1] = 1;
		}
		else if (ch == 'H') {
			a = 1;
			card[a][x - 1] = 1;
		}
		else if (ch == 'C') {
			a = 2;
			card[a][x - 1] = 1;
		}
		else if (ch == 'D') {
			a = 3;
			card[a][x - 1] = 1;
		}
	}

	//�o��
	for (int j = 0; j < 4; j++) {
		for (int k = 1; k <= 13; k++) {
			if (card[j][k - 1] == 0) {
				if (j == 0) {
					ch = 'S';
				}
				else if (j == 1) {
					ch = 'H';
				}
				else if (j == 2) {
					ch = 'C';
				}
				else if (j == 3) {
					ch = 'D';
				}
				cout << ch << " " << k << endl;
			}
		}
	}
}
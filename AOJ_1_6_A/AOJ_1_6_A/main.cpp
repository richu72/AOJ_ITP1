#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

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
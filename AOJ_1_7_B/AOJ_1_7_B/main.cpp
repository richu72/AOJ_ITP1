#include<iostream> //std
#include<iomanip> //���������_��p���鎞�ɕK�v
using namespace std;//std���ȗ��ł���

int main() {
	int n[100];
	int x[300];
	int P =0;
	//����
	for (int i = 0; i < 100; i++) {
		cin >> n[i] >> x[i];
		if (n[i] == 0 && x[i] == 0) {
			break;
		}
		P++;
	}
	

	//�o��
	int X[1000] = {};//�o�͒l

	for (int p = 0;p<P; p++) {
		for (int i = 1; i <= n[p]; i++) {
			for (int j = i + 1; j <= n[p]; j++) {
				for (int k = j + 1; k <= n[p]; k++) {

					if (i + j + k == x[p]) {
						X[p]++;
					}
				}
			}
			
		}
		cout << X[p] << endl;
	}
}



/*
SSRS

#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
	int n, x;
	cin >> n >> x;
	if (n == 0 && x == 0){
	  break;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
	  for (int j = i + 1; j <= n; j++){
		for (int k = j + 1; k <= n; k++){
		  if (i + j + k == x){
			ans++;
		  }
		}
	  }
	}
	cout << ans << endl;
  }
}

*/
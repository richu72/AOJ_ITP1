#include<iostream> //std
#include<iomanip> //浮動小数点を用いる時に必要
using namespace std;//stdを省略できる

int main() {
	int n[100];
	int x[300];
	int P =0;
	//入力
	for (int i = 0; i < 100; i++) {
		cin >> n[i] >> x[i];
		if (n[i] == 0 && x[i] == 0) {
			break;
		}
		P++;
	}
	

	//出力
	int X[1000] = {};//出力値

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
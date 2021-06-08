#include <iostream>
using namespace std;

int main(){
	int m = 21, n = 21;
	long long matriz[m][n];
	for(int i=0; i<m; i++){
		matriz[0][i] = 1;
		matriz[i][0] = 1;
	}

	for(int i=1; i<m; i++){
		for(int j=1; j<n; j++){
			matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
		}
	}
	cout<<matriz[20][20]<<'\n';

	return 0;
}

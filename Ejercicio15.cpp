#include <iostream>
using namespace std;

void per(int m, int n){
	long long res = 1;
	//40!/(20!*20!)
	for(int i=21, j=1; i<=40; i++, j++){
		res *=i;
		if(j<=20) res/=j;
	}
	cout<<res<<'\n';
}

int main(){
	int m = 20, n = 20;
	per(m,n);
	return 0;
}

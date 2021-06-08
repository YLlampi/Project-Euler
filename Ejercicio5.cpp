#include <iostream>
using namespace std;

int mcd(int a, int b) {
    int m;
    int p = max(a, b);
    int q = min(a, b);
    do {
        m = q;
        q = p%q;
        p = m;
    } while(q!=0);
    return m;
}

int mcm(int a, int b) {
    return a/mcd(a,b)*b;
    
}

int main(){
	
	int minimo = 1;
	for(int i=2;i<=20;i++){
		minimo=mcm(minimo,i);
	}
	cout<<minimo<<'\n';
	
	return 0;
}

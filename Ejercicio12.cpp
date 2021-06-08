#include <iostream>
using namespace std;

long long tri(long long n){
	return n*(n+1)/2;
}

int main(){
	int a = 1;
	long long r;
	int cont = 1;
	long long q=0;
	while(cont<500){
		cont=1;
		r = tri(a++);
		q = r;
		for(int i=2;i<=r;i++){
			int cont2 = 0;
			while(r%i==0){
				cont2++;
				r/=i;
			}
			cont *= cont2 + 1;
			if(r==1) break;
		}
		
	}

	cout<<q<<'\n';
	return 0;
}

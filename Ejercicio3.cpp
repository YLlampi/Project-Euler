#include <iostream>
using namespace std;

bool esPrimo(int n){
	for(int i=2;i<n/2;i++)
		if(n%i==0) return false;
	return true;
}

int main(){
	long a = 600851475143;
	int max = -1;
	for(int i=3;i<=a;i++){
		if(esPrimo(i)){
			while(a%i==0){
				a/=i;
			}
			max = i;
		}
	}
	cout<<max<<'\n';
	return 0;
}

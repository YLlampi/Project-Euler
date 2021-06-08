#include <iostream>
using namespace std;

int main(){
	int max = -2;
	int rpta = 0;
	for(int i=2;i<10000;i++){
		long long r = i;
		int cont = 0;
		while(r!=1){
			if(r%2==0) r/=2;
			else r = r*3+1;
			cont++;	
		}
		if(max<cont){
			max = cont;
			rpta = i;
		}
	}
	cout<<rpta<<'\n';
	return 0;
}

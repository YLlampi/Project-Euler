#include <iostream>
using namespace std;

//#define MAX 1.8E19
//bool array[99999999];

int main(){
	unsigned long long MAX = 1.8E18;
	bool array[MAX];
	long long rpta = 0;
	int max = -2;
	for(int i=2; i<10000;i++){
		int cont = 0;
		if(!array[i]){
			array[i] = true;
			long long r = i;
			while(r!=1){
				r = (r%2==0)? r/2:r*3+1;
				array[r] = true;
				cont++;
			}
			if(max<cont){
				max = cont;
				rpta = i;
			}
		}
	}
	cout<<rpta<<'\n';
	return 0;
}

#include <iostream>
using namespace std;

bool arr[999999];

void criba(){
	for(int i=2;i<999999;i++){
		arr[i] = true;
	}

	for(int i=2;i<999999;i++){
		for(int j=2;j*i<999999;j++){
			arr[j*i] = false;
		}
	}
}

int main(){
	criba();
	int cont = 0,i=0;
	while(cont<10001){
		if(arr[i++]){
			cont++;
		}
	}
	cout<<i-1<<'\n';

	return 0;
}

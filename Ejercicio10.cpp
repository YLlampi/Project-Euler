#include <iostream>
using namespace std;

bool arr[2000001];

void criba(){
	for(int i=2;i<2000001;i++){
		arr[i] = true;
	}

	for(int i=2;i<2000001;i++){
		for(int j=2;j*i<2000001;j++){
			arr[j*i] = false;
		}
	}
}

int main(){
	criba();
	long long sum=0;
	for(int i=2;i<=2000000;i++){
		if(arr[i]){
			sum+=i;
		}
	}
	cout<<sum<<'\n';
	return 0;
}

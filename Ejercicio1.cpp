#include <iostream>
using namespace std;

int main(){
	int a = 1000;
	int sum = 0;
	for(int i=1;i<a;i++){
		if(i%3== 0 or i%5==0){
			sum+=i;
		}
		
	}
	cout<<sum<<'\n';

	return 0;
}

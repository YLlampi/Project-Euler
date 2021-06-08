#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 1;
	int sum = 0;
	int c = 0;
	while(c<=4000000){
		c = a +b;
		a = b;
		b = c;
		if(c%2==0) sum+=c;
	}
	cout<<sum<<'\n';
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int n = 100,a,b,c;
	a = n*(n+1)*(2*n+1)/6;
	b = (n*(n+1))/2;
	c = (b*b)-a;
	cout<<c<<'\n';

	return 0;
}

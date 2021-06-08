#include <iostream>
using namespace std;

bool isPalindrome(int n){
	string s = to_string(n);
	
	for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--){
		if(s[i]!=s[j]) return false;
	}
	
	return true;
}

int main(){
	int max = -1;
	
	for(int i=100;i<1000;i++){
		
		for(int j=100;j<1000;j++){
			int mul = i*j;
			
			if(isPalindrome(mul))
				if(max < mul) max = mul;
		}
	}
	
	cout<<max<<'\n';
	return 0;
}

#include <iostream>
using namespace std;

int lengthofNum(int n){
	int l = 0;
	while(n){
		n = n/10;
		l++;
	}
	return l;
}

bool is3sMultiple(int n){
	int t, s;
	while(lengthofNum(n) != 1){
		t = n;
		s = 0;
		while(t){
			s = s + t%10;
			t = t/10;
		}
		n = s;
	}
	if(n == 3 || n == 6 || n == 9){
		return true;
	}else{
		return false;
	}
}

int main(){
	int a, b, i;
	cin>>a>>b;
	for(i = a; i <= b; i++){
		if(is3sMultiple(i) == true){
			cout<<i<<" ";
		}
	}
	return 0;
}

#include <iostream>
using namespace std;

int fib(int x){
	if( x == 1 || x == 2 ){
		return 1;
	}else{
		return fib(x-2) + fib(x-1);
	}
}

int main(){
	int x;
	cin>>x;
	cout<<fib(x);
	return 0;
}

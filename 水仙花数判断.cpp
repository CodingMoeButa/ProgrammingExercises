#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n,a,b,c;
	
	while(1){
		cin>>n;
		if( n == 0 ){
			break;
		}
		a = n/100;
		b = n%100/10;
		c = n%100%10;
		if( pow(a,3) + pow(b,3) + pow(c,3) == n ){
			cout<<"Yes\n"; 
		}else{
			cout<<"No\n";
		}
	}
	
	return 0;
} 

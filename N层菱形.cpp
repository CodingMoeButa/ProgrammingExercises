#include <iostream>
using namespace std;

int main() {
	int i,j,k,n;

	cin>>n;

	for( i = n ; i >= 1 ; i-- ){
		for( k = 1 ; k <= n-i ; k++ ){
			cout<<" ";
		}
		for( j = 1 ; j <= n ; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

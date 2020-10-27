#include <iostream>
using namespace std;

int main() {
	int i,j,k;

	for( i = 4 ; i >= 1 ; i-- ){
		for( k = 1 ; k <= 4-i ; k++ ){
			cout<<" ";
		}
		for( j = 1 ; j <= 2*i-1 ; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

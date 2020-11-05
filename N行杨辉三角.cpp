#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	int a[n][n] = {0};
	
	for( i = 0 ; i < n ; i++ ){
		a[i][0] = 1;
		a[i][i] = 1;
	}
	
	for( i = 2 ; i < n ; i++ ){
		for( j = 1 ; j < i ; j++ ){
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
	}
	
	for( i = 0 ; i < n ; i++ ){
		for( j = 0 ; j <= i ; j++ ){
			cout<<setw(4)<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

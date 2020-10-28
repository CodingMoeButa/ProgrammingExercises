#include <iostream>
using namespace std;

int main(){
	int i,j,k,n;
	cin>>n;
	
	for(i=1;i<=n/2+1;i++){
		for(j=n/2+1-i;j>0;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	
	for( i = n/2 ; i >= 1 ; i-- ){
		for( k = 1 ; k <= n/2+1-i ; k++ ){
			cout<<" ";
		}
		for( j = 1 ; j <= 2*i-1 ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0; 
}

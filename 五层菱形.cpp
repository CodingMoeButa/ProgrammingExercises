#include <iostream>
using namespace std;

int main(){
	int i,j,k;
	
	for(i=1;i<=3;i++){
		for(j=3-i;j>0;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	
	for( i = 2 ; i >= 1 ; i-- ){
		for( k = 1 ; k <= 3-i ; k++ ){
			cout<<" ";
		}
		for( j = 1 ; j <= 2*i-1 ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0; 
}

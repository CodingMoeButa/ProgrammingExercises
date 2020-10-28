#include <stdio.h>

int main(){
	int n,i,j,t,max_,max;
	scanf("%d",&n); 
	int a[n];
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	
	for( i = 0 ; i < n ; i++ ){
		max_ = i ;
		max = a[i];
		for( j = i ; j < n; j++ ){
			if( a[j] > max ){
				max_ = j ;
				max = a[j];
			}
		}
		t = a[i];
		a[i] = max ;
		a[max_] = t;
	} 
	
	for( i = 0 ; i < n ; i++ ){
		printf("%d ",a[i]);
	}
	
	return 0;
}

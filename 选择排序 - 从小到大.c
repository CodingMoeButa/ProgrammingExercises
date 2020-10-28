#include <stdio.h>

int main(){
	int n,i,j,t,min_,min;
	scanf("%d",&n); 
	int a[n];
	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&a[i]);
	}
	
	for( i = 0 ; i < n ; i++ ){
		min_ = i ;
		min = a[i];
		for( j = i ; j < n; j++ ){
			if( a[j] < min ){
				min_ = j ;
				min = a[j];
			}
		}
		t = a[i];
		a[i] = min ;
		a[min_] = t;
	} 
	
	for( i = 0 ; i < n ; i++ ){
		printf("%d ",a[i]);
	}
	
	return 0;
}

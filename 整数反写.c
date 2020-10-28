#include<stdio.h>

int main(){
	int i,o=0;
	scanf("%d",&i);
	while(i>0){
		o=o*10+i%10;
		i=i/10;
	}
    printf("%d",o);
	return 0;
}

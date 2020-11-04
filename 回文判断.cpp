#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int q;
	cin>>q;
	string str1,str2;
	while(q>0){
		cin>>str1;
		str2=str1;
		reverse(str2.begin(),str2.end());
		if(str1==str2){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
		q--;
	}
	return 0;
}

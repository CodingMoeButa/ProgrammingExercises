#include<iostream>
#include<cstring>
using namespace std;

void sortbuff(char* str[],int len){
	int i,j;
	char* t;
	for( i = 0 ; i < len ; i++ ){
		for( j = 0 ; j < len-i-1 ; j++ ){
			if( strcmp(str[j],str[j+1]) > 0 ){
				t = str[j];
				str[j] = str[j+1];
				str[j+1] = t;
			}
		}
	}
}

void print(char* str[],int len){
	for(int i = 0 ; i < len ; i++ ){
		cout<<str[i]<<endl;
	}
}

int main()
{
	
	char* str[]={"hello world!","hello C++!","hello C!"};
	
	//sortbuffʵ�ֶ��ַ��������� 
    sortbuff(str,3);
    
    //printʵ�ֶ��ַ����Ĵ�ӡ 
    print(str,3);
		
	return 0;
}

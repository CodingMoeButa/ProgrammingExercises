#include <iostream>
#include <string>
using namespace std;

string str;
int get(int begin_t, int end_t)
{
    while(end_t > begin_t){
        if(str[end_t] != str[begin_t]){
            return 0;
        }
        end_t--;
        begin_t++;
    }
    return 1;
}
 
int main() {
    getline(cin, str);
    for(int i = 2; i <= str.size(); i++){
        for(int j = 0; j <= str.size() - i; j++){
            if(get(j, j + i - 1)){
                for(int k = j; k <= j + i - 1; k++){
                    cout << str[k];
                }
                cout << endl;
            }
        }
    }
    return 0;
}


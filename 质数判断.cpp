#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int q,i;
    cin>>q;
    while (q > 0) {
        cin>>i;
        if (isPrime(i)) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
        q--;
    }
}

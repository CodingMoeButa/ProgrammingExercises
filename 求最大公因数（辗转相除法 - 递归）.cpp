#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd(n, m % n);
    }
}

int main() {
    int a, b, c;
    cin >> a >> b;
    c = gcd(a, b);
    cout << c;
    return 0;
}

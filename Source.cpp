#include <iostream>
#include<cmath>
using namespace std;
int gcd(unsigned short int a, unsigned short int b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    int a, b, c, d;
    //cin >> a >> b >> c >> d;
    a = 0; b = 0; c = 9; d = 16;
    if (a == c || b == d)
        cout << 0;
    else {
        a = abs(a -= c);
        b = abs(b -= d);
        int ratio = gcd(a, b);
        if (ratio == 1) {
            cout << a + b - 1;
            return 0;
        }
        cout << a/ratio << " " << b/ratio << ' ' << ratio;
    }
    return 0;
}
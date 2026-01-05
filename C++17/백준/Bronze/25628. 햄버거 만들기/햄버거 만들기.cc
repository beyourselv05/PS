#include <iostream>
using namespace std;
int main() {
    int a, b;
    int sum=0;
    cin >> a; cin >> b;
    while (a>=2 && b>=1) {
        sum++;
        a -= 2;
        b -= 1;
    }
    cout << sum;
}
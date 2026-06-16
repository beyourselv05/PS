#include <iostream>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    if(a<=b) cout << (a/2)*100;
    else if(a>b) cout << (b/2)*100;
}
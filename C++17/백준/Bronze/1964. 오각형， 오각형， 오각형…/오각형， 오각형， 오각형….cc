#include <iostream>
using namespace std;
int main() {
    int n;
    int result = 1;
    cin >> n;
    for(int i=1; i<=n; i++) {
        result += ((3*(i-1))+4);    
        result %= 45678;
    }
    cout << result;
}
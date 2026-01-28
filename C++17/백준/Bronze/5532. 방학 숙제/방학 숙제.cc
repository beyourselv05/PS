#include <iostream>
using namespace std;
int main() {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    
    if(A%C > 0) {
        A /= C;
        A++;
    }
    else if(A%C == 0) {
        A /= C;
    }
    
    if(B%D > 0) {
        B /= D;
        B++;
    }
    else if(B%D == 0) {
        B /= D;
    }
    
    if(A >= B) cout << L-A;
    else cout << L-B;
}
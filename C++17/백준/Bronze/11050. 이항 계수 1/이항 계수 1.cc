#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    int fac_N=1, fac_K=1, fac_NK=1;
    cin >> N >> K;
    for(int i=1; i<=N; i++) {
        fac_N *= i;
    }
    for(int i=1; i<=K; i++) {
        fac_K *= i;
    }
    for(int i=1; i<=N-K; i++) {
        fac_NK *= i;
    }
    cout << (fac_N)/(fac_K*fac_NK);
}
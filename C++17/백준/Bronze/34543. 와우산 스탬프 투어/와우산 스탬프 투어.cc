#include <iostream>
using namespace std;
int main() {
    int N, W, sum=0;
    cin >> N >> W;
    sum += 10*N;
    if(N >= 3) sum += 20;
    if(N == 5) sum += 50;
    if(W > 1000) {
        sum -= 15;
    }
    if(sum < 0) sum = 0;
    cout << sum;
}
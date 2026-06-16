#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D, H, W;
    int a, b;
    cin >> D >> H >> W;
    b = sqrt(pow(D, 2) * ((pow(W, 2) / (pow(H, 2) + pow(W, 2)))));
    a = sqrt(pow(D, 2) * (pow(H, 2) / (pow(H, 2) + pow(W, 2))));
    cout << a << " " << b;
}
#include <iostream>
using namespace std;

int main() {
    int sum;
    int N, M;
    cin >> N >> M;
    if((N*100) / M > 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
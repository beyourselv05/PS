#include <iostream>

using namespace std;

int main() {
    int N;
    
    cin >> N;
    long long int sum=1;
    
    for(int i=N; i>0; i--) {
        sum = sum*i;
    }
    cout << sum << endl;
}
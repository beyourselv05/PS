#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> a(4);
    int sum=0;
    for(int i=0; i<5; i++) {
        cin >> a[i];
        if(a[i] <= 40) {
            a[i] = 40;
        }
        sum += a[i];
    }
    cout << sum/5;
}
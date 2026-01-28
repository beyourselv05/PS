#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    int cnt=0;
    vector <int> v(4);
    
    cin >> n;
    for(int i=0; i<5; i++) {
        cin >> v[i];
        if(v[i] == n) {
            cnt++;
        }
    }
    cout << cnt;
}
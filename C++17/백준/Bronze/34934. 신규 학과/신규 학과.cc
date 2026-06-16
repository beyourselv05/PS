#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string name[n];
    int year[n];
    for(int i=0; i<n; i++) {
        cin >> name[i] >> year[i];
    }
    for(int i=0; i<n; i++) {
        if(2026 == year[i]) {
            cout << name[i]; 
        }
    }
}
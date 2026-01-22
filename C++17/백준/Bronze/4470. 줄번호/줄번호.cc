#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    string str[n];
    for(int i=0; i<n; i++) {
        getline(cin, str[i]);
    }
    for(int i=0; i<n; i++) {
        cout << i+1 << ". " << str[i] << '\n';
    }
}
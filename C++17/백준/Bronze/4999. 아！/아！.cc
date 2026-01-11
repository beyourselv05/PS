#include <iostream>
using namespace std;
int main() {
    string f;
    string s;
    cin >> f;
    cin >> s;
    if(f.length() >= s.length()) {
        cout << "go";
    }
    else cout << "no";
}
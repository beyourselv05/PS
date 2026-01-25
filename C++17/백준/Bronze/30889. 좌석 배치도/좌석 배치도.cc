#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> vc;

int main() {
    int N;
    cin >> N;
    
    vector<vc> v(10, vc(20, '.'));  // .그리드 생성
    
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        
        int row = s[0] - 'A';
        int col = stoi(s.substr(1))-1;
        
        v[row][col] = 'o';
    }
    
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v[i].size(); j++) {
            cout << v[i][j];
        }
        cout << '\n';
    }
}
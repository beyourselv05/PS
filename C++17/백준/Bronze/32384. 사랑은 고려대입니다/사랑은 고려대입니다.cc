#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for(int i=0; i<num; i++) {
        if(i != num-1) cout << "LoveisKoreaUniversity ";
        else if(i == num-1) {
            cout << "LoveisKoreaUniversity";
        }
    }
}
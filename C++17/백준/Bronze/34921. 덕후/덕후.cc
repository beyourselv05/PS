#include <iostream>

using namespace std;

int main() {
    int A, T;
    int result;
    
    cin >> A;
    cin >> T;
    
    result = 10+2*(25-A+T);
    
    if(result <= 0) {
        cout << "0";
    }
    else {
        cout << result << endl;
    }
}
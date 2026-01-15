#include <iostream>
using namespace std;
int main() {
    int N, Y_sum=0, M_sum=0;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++) {
        Y_sum += (arr[i]/30 + 1)*10;
        M_sum += (arr[i]/60 + 1)*15;
    }
    if(Y_sum < M_sum) {
        cout << "Y " << Y_sum; 
    }
    else if(M_sum < Y_sum) {
        cout << "M " << M_sum;
    }
    else {
        cout << "Y " << "M " << M_sum;
    }
}
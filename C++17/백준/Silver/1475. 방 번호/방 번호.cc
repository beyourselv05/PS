#include <iostream>
using namespace std;
int main() {
    int N, max=0;
    cin >> N;
    int cnt[10] = {0,};
    while(N != 0) {
        if(N%10 == 9 || N%10 == 6) {
            if(cnt[6] == cnt[9]) cnt[6]++;
            else cnt[9]++;
            N /= 10;
        }
        
        else {
            cnt[N%10]++;
            N /= 10;
        }
    }
    
    for(int i=0; i<10; i++) {
        if(max < cnt[i]) {
            max = cnt[i];
        }
    }
    cout << max;
    //debugger
    /*
    for(int i=0; i<=9; i++) {
        cout << cnt[i] << " ";
    }
    */
}

//5456
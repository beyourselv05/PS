#include <iostream>
using namespace std;
int main() {
    int n=0;
    int bg_min=2000; 
    int bev_min=2000;
    int arr[5];
    while (n<5) {
        cin >> arr[n];
        n++;
    }
    for(int i=0; i<3; i++) {
        if(arr[i] < bg_min) {
            bg_min = arr[i];
        }
    }
    for(int i=3; i<5; i++) {
        if(arr[i] < bev_min) {
            bev_min = arr[i];
        }
    }
    cout << bev_min + bg_min - 50;
}
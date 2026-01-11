#include <iostream>
using namespace std;
int main() {
    int arr[3];
    int temp;
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int i=0; i<2; i++) {
        if(arr[0] > arr[1]) {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        if(arr[1] > arr[2]) {
            temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2];
}
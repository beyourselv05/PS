#include <stdio.h>

int main() {
    int n;
    int arr[101];
    int cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
        for(int j=2; j<=arr[i]; j++)
        {
            if(arr[i] == j) {
                cnt++;
            }
            if(arr[i] % j == 0) {
                break;
            }
        }
    }
    printf("%d", cnt);
}

//소수란 ? 1과 자기 자신으로만 나눠떨어지는 수 (약수가 두개)
//2,3,5,7,11,13,17,19,23,29,31,37
//1은 아님
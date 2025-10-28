#include <stdio.h>

//N번 바구니(개), M번 공 넣기

int main() {
    int N, M;
    int arr[100] = {0, };
    int s, e, p = 0;
    
    scanf("%d %d", &N, &M);
    
    for(int i=0; i<M; i++) { // 1->M(test)
        scanf("%d %d %d", &s, &e, &p);
        for(int j=s; j<=e; j++) {
            arr[j-1] = p;
        }
    }
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
}

//1 2 3 -> 33000
//3 4 4 -> 33440
//1 4 1 -> 11110
//2 2 2 -> 12110

//1. 틀린이유 -> arr배열에 100대입을 안함. -> 왜?

#include <stdio.h>

float m, N;            // int, float
float arr[1001];    // = { 0 };
float sum = 0;
float final;

int main() {
    scanf("%f", &N);
    m = arr[0];
    for(int i=0; i<N; i++) {
        scanf("%f", &arr[i]);
        if(m<arr[i]) {
            m = arr[i];     //m = 80;
        }
    }
    for(int i=0; i<N; i++) {
        arr[i] = (arr[i]/m)*100;
    }
#if 1    
    for(int i=0; i<N; i++) {
        sum += arr[i];
    }
    
    final = sum / N;
    
    printf("%f", final);
#endif 
}

//procedure
//40/80*100 => 50
//80/80*100 => 100
//60/80*100 => 75
// (50 + 100 + 75)/N
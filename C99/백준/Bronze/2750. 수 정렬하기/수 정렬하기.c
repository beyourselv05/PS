#include <stdio.h>

int main() {
    int n;
    int temp;
    
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        printf("%d\n",a[i]);
    }
}
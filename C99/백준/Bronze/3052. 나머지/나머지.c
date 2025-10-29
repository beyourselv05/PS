#include <stdio.h>

unsigned int n[1000] = { 0 };
int count = 0;
int semi_count = 0;

int main() {
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        n[i] %= 42;
    }

    for(int i=0; i<10; i++) {
        int semi_count = 0;
        for(int j=0; j<i; j++) {
            if(n[i] == n[j]) {
                semi_count++;
                break;
            }
        }
        if(semi_count == 0) count++;
    }
    printf("%d\n", count);
}

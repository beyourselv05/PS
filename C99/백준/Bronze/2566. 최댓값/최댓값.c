#include <stdio.h>
int main() {
    int a, n, m;
    int max=0;
    
    for(int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            scanf("%d", &a);
                if (max <= a) {
                    max = a;
                    n = i + 1;
                    m = j + 1;
                }
        }
    }
    printf("%d\n%d %d", max, n, m);
}
#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char s[11];
    
    scanf("%s", &s);
    
    for (i=9; i>=0; i--) {
        for (j=0; j < strlen(s); j++) {
            if (s[j] == i + 48) {
                printf("%c", s[j]);
            }
        }
    }
}
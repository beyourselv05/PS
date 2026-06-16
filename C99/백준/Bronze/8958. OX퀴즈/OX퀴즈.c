//OOXXOXXOOO score = 1+2+0+0+1+0+0+1+2+3=10score

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[100];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%s", arr);
        int sum=0; int cnt=1;
        for(int j=0; j<strlen(arr); j++) {
            if(arr[j] == 'O') {
                sum += cnt++;
            }
            if(arr[j] == 'X') {
                cnt = 1;
            }
        }
        printf("%d\n", sum);
    }
}
//OOOOOOOOOO
//1,3,6,10,15,21,28,36,45,55
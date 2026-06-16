#include <stdio.h>
#include <string.h>

int main() {
    int s;
    int x, y, people;
    int apt[1000][1000] = {0,};
    scanf("%d", &s);
    
    for(int i=0; i<s; i++) {
        scanf("%d %d %d", &y, &x, &people); // 6 12 10
        for(int j=1; j<=x; j++) {
            for(int k=1; k<=y; k++) {
                apt[k][j] = k*100+j;
            }       //apt[4][2] = 10번째, apt[6][1] = 6번째 (6 12 6) <- error
        }
        if(people%y != 0) printf("%d\n", apt[people%y][1+people/y]);
        if(people%y == 0) {
            printf("%d\n", apt[y][people/y]);
        }
    }
}
//6층, 12방, 10번째손님 (12X6)
//30층, 50방, 72번쨰손님 (50X30)
//6 12 6시 apt[6][1]601
//6 12 12시 apt[6][2]602
//6 12 18시 apt[6][3]603

#include <stdio.h>

int Euclidean(int a, int b) {           //최대공약수
    if(b==0) {
        return a;
    }
    else {
        return Euclidean(b, a%b);
    }
}

int multiple(int a, int b) {            //최소공배수
    return (a*b)/Euclidean(a, b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n%d", Euclidean(x, y), multiple(x, y));
}
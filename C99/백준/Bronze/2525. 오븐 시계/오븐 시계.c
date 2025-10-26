#include <stdio.h>

int main() {
    int hour, min;
    int plus;
    
    scanf("%d %d\n", &hour, &min);   //hour, minute
    scanf("%d", &plus);            //minute +
    
    min += plus;
    
    if (min>59) {
        hour += min/60;
        min = min%60;
    }
    
    if (hour>23) {
        hour = hour - 24;
    }
    printf("%d %d", hour, min);
}
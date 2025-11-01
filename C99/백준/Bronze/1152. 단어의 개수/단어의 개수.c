//scanf는 공백을 통해서 입력을 구분하는데 문자열을 출력해야 할
//경우 공백이 필요함. %s 사이에 [^\n]을 넣어주면 해결완료
//decimal 32 -> char (space)임.
#include <stdio.h>
#include <string.h>

int main() {
    int sum=0;;
    char s[1000001];
    
    scanf("%[^\n]s", s);
    
    if (strlen(s) == 1 && s[0] == ' ') {
        printf("0");
        return 0;
    }
    
    for(int i=1; i<strlen(s)-1; i++) {
        if(s[i] == ' ') {
            sum += 1;
        }
    }
    printf("%d", sum+1);
    return 0;
}
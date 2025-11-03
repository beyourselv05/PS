//그룹 단어의 개수를 출력하는 문제.

//그럼 그룹단어의 조건이란??
//1. happy와 같이 pp가 뭉쳐있거나
//2. kin과 같이 겹치는 알파벳이 없을경우.
// aba와 같이 [0]의 a와 [2]의 a가 그룹화 안되어있음 -> 그룹단어 X

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int n, gword=0;;
    
    int distance;
    
    scanf("%d", &n);            //happy
    
    for(int i=0; i<n; i++) {            //if cnt=1, 그룹단어x, if cnt=0, 그룹단어O
        int cnt=0;
       
        scanf("%s", str);
        for(int j=0; j<strlen(str); j++) {          //갭도 신경을 써야할까?
            for(int k=j+1; k<strlen(str); k++) {
                if(str[j] == str[k]) {
                    distance = k-j;
                    if(distance >= 2) {
                        if(str[k] != str[k-1]) {
                            cnt++;
                        }
                    }
                }
            }
        }
        if(cnt == 0) gword++;
    }
    printf("%d", gword);
}

//첫번쨰와 다음요소를 비교하고 다르면 카운트,
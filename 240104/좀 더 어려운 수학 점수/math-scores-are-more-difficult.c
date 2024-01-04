#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int ma,ka,mb,kb;
    scanf("%d%d%d%d",&ma,&ka,&mb,&kb);
    if (ma>mb){
        printf("A");
    }
    else if (ma<mb) {
        printf("B");
    }
    else {
        if (ka>kb){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    return 0;
}